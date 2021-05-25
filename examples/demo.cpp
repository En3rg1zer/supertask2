#include <BIN.hpp>

#include <iostream>

int main(int argc, char** argv)
{
  int a = atoi(argv[1]);
  std::cout << IntToBin(a) << std::endl;
}
