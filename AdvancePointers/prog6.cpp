#include<iostream>


int main()
{

	int var =10;

	int *ptr ;

	ptr = &var;

	std::cout<<"var : "<<var<<" ptr : "<<ptr<<" *ptr: "<<*ptr<<"\n";

	*ptr = 20;


	std::cout<<"var : "<<var<<" ptr : "<<ptr<<" *ptr: "<<*ptr<<"\n";

	return 0;
}

