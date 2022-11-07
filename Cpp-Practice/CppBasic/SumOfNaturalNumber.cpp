#include<iostream>


int main(int argc, char *argv[])
{

	int num;

	std::cout<<"enter a number\n";

	std::cin>>num;
	int sum =0 ; 
	for(int i=1;i<=num;i++)
	{
		sum +=i;
	}

	std::cout<<"sum of N Natural number is "<<sum<<std::endl;

	return 0;
}


