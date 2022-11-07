#include<iostream>



int main(int argc, char * argv[])
{


	int num;

	std::cout<<"enter a number to print factorial\n";

	std::cin>>num;

	int  factorial= 1;

	for(int i=1;i<=num;i++)
	{

		factorial *=i;
	}

	std::cout<<"factorial of "<<num <<" is "<<factorial<<std::endl;

	return 0;
}




