#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value; //1234567891234567

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n\n The memory in the sturct is one after one.\n it means that incorrect var comes after the last place in the value arr.\n Beacuse we input string,\n if we enter 16 chars the 17th will be 0, beacuse strings ends with 0.\n so, if you enter 16 chars string, incorrect var will always be 0!";

	return 0;
}
