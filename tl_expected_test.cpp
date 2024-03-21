#include <tl_expected/expected.hpp>
#include <string>
#include <iostream>

tl::expected<bool, std::string> base_function()
{
  return tl::make_unexpected("BASE ERROR");
}

tl::expected<int, std::string> top_level_function()
{
  auto result = base_function();
  if (!result.has_value())
  {
    return tl::make_unexpected("TOP LEVEL ERROR: " + result.error());
  }
  else 
  {
    return true;
  }
}

int main()
{
  auto result = top_level_function();
  if (result.has_value())
  {
    std::cout << "Success, value: " << result.value() << "\n";
  }
  else
  {
    std::cout << "Failure, msg: " << result.error() << "\n";
  }
}
