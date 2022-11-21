#include<iostream>


int global =10;

int* fun()
{

	return &global;
}



int main()
{

	std::cout<<" fun is a function that returns a pointer to an integer quantity\n";

	std::cout<<" int *fun(void); \n";



	int *ptr = fun();


	std::cout<<"value of global is : "<<*ptr<<"\n";

	return 0;
}

