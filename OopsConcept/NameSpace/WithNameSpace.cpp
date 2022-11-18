#include<iostream>

namespace first
{
	void fun()
	{
		std::cout<<"fun first\n";
	}

}


namespace second
{
	void fun()
	{
		std::cout<<"fun second\n";
	}
}


int main()
{

	first::fun();

	using namespace second;

	fun();

	return 0;

}

	
