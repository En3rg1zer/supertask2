#include <BIN.hpp>

std::string IntToBin(int a)
{
	std::string alph = "01";
	std::string ans = "";
	
	while (a > 0)
	{
		ans += alph[a % 2];
		a /= 2;
	}
	
	std::reverse(ans.begin(), ans.end());
	return ans;
}