#include <BIN.hpp>

#include <gtest/gtest.h>

#include <iostream>

TEST(IntToBin, Test1)
{
  int a = 123;
  std::string ans = IntToBin(a);
  std::string trueans = "1111011";

  EXPECT_EQ(trueans, ans);
}
