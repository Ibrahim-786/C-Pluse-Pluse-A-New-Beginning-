#include<iostream>

int global =10;

int* fun(char *i)
{

	std::cout<<"call to fun : "<<*i<<"\n";

	return &global;
}



int main()
{



	std::cout<<"usage: int* fun(char *a);\n   \
	fun is a function that accepts an argument which is a pointer to a character \n 	returns  an \
	pointer to integer quantity\n" ;


	char var = 'i';
	int *ret = fun(&var);

	std::cout<<"address of gloabl : "<<*ret;



	return 0;
}

