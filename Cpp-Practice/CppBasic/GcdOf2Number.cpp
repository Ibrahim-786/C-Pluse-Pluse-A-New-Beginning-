#include<iostream>


int main(int argc, char *argv[])
{

	int num1,num2;

	std::cout<<"enter 2 numbers \n";

	std::cin>>num1>>num2;

	int lowest = num1>num2?num2:num1;

	while(lowest)
	{
		if((num1%lowest == 0) && (num2%lowest == 0))
		{

			break;
		}
		else
		{
		
			lowest --;
		}
	}



	std::cout<<"Gcd of "<<num1<<" and "<<num2<<" is "<<lowest;

	return 0;
}
