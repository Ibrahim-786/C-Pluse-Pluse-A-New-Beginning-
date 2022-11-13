#include<iostream>

int main()
{

	//forcing the compiler to create in cpu registers for faster execution
	register int x= 20;

	std::cout<<x<<"\n";

	return 0;
}
