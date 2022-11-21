#include<iostream>

int arr[10] ;

int (*fun(char *a))[10]
{
	for(int i=0;i<10;i++)
	{
		arr[i] = i+4;
	}

	
	return &arr;
}


int main()
{

	std::cout<<"int (*p(char *a))[10] \n \
p is a function that accepts an argument which is a pointer to a character returns a \n \
 pointer to a 10-element integer array\n";

	
	char pass = 'f';
	int (*ptr) [10] = fun(&pass);

	for(int i=0;i<10;i++)
	{
		std::cout<<"(*ptr)["<<i<<"]"<<" = "<<(*ptr)[i]<<"\n";
	}


	return 0;
}

