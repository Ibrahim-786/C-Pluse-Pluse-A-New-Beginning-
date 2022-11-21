#include<iostream>

int fun(char (*a)[10])
{
	
	for(int i=0;i<10;i++)
	{
		std::cout<<"(*a)["<<i<<"] = "<<(*a)[i]<<"\n";
	}

	return 0;
}


int main()
{

	std::cout<<"int (*p)(char (*a)[]) \n \
p is pointer to a function that accepts an argument which is a pointer to a character array \n \
returns an integer quantity\n";


	int (*fptr)(char (*)[10]);

	fptr = &fun;
	char chararr[10] = {'a','b','c','d','e','f','g','h','i','j'};

	std::cout<<(*fptr)(&chararr);

	return 0;
}
