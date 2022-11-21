#include<iostream>

char arr[10] ;


int fun(char (*a)[10])
{
	for(int i=0;i<10;i++)
	{
		arr[i] = 'I';
	}


	for(int i=0;i<10;i++)
	{
		std::cout<<"(*a)["<<i<<"] = "<<(*a)[i]<<"\n";
	}
	
	return 0;
}


int main()
{

	std::cout<<"int p(char (*a)[])\n \
p is a function that accepts an argument which is a pointer to a character array returns \n \
an integer quantity \n";

	std::cout<<"ret:" <<fun(&arr);


	return 0;

}

