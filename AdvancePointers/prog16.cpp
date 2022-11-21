#include<iostream>

int global = 10;

int* fun(char *a[10])
{
	for(int i=0;i<10;i++)
	{
		std::cout<<"*a["<<i<<"] = "<<*a[i]<<"\n";
	}

	return &global;
}



int main()
{
	std::cout<<"int *(*p)(char *a[]) \n \
 p is pointer to a function that accepts an argument which is a array of pointers to \n \
 characters returns a pointer to an integer quantity\n";


	int* (*fptr)(char *a[10]);

	char chararr[10];

	for(int i=0;i<10;i++)
	{
		chararr[i] = 'I';
	}

	char *charpointerarr[10];

	for(int i=0;i<10;i++)
	{
		charpointerarr[i]= &chararr[i];
	}

	fptr = &fun;
	int *ret = (*fptr)(charpointerarr);

	std::cout<<*ret<<"\n";

	return 0;
}

