#include<iostream>


int fun(char *a)
{
	

	return 10;
}


int main()
{

	std::cout<<" int (*p)(char *a) \n; \
        p is pointer to a function that accepts an argument which is a pointer to a character    \n \
 returns an integer quantity\n";


	int (*p) (char *a)  = &fun;

	std::cout<<"\n\n";
	char pass = 'i';
	std::cout<<(*p)(&pass)<<"\n";
	return 0;
}

