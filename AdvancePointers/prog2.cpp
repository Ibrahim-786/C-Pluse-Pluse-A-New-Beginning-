#include<iostream>


int fun(char i)
{

	std::cout<<"call to fun : "<<i<<"\n";

	return 0;
}



int main()
{



	std::cout<<"usage: int fun(char *a);\n   \
	fun is a function that accepts an argument which is a pointer to a character \n 	returns  an \
	integer quantity\n" ;


	int ret = fun('i');

	std::cout<<"if o then success 1: means failure : "<<ret<<"\n";



	return 0;
}

