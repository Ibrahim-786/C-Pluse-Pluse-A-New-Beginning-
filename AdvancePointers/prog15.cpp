#include<iostream>

int global=10;

int * fun(char (*a)[10])
{

	for(int i=0;i<10;i++)
	{	
		std::cout<<"(*a)["<<i<<"] = "<<(*a)[i]<<"\n";

	}

	return &global;
}


int main()
{

	std::cout<<"int *(*p)(char (*a)[]) \n \
p is pointer to a function that accepts an argument which is a pointer to a character \n \
array \n \
 returns a pointer to an integer quantity\n";


	char arr[10] ;

	for(int i=0;i<10;i++)
	{
		arr[i] = 'I';
	}

	int* (*fptr) (char (*) [10]);

	fptr = &fun;
	int *ret = (*fptr)(&arr);
	std::cout<<*ret<<"\n";

	return 0;
}








