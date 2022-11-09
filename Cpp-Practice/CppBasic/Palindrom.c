#include<iostream>


int main(int argc, char * argv[])
{


	int num;

	std::cout<<"enter a number \n";

	std::cin>>num;

	int Revers =0;

	int temp = num;
	while(temp > 0)
	{
	   int r= temp%10;

	   temp=temp/10;

	   Revers = Revers*10 + r;
	}

	if(num == Revers)
	{
		std::cout<<"The given number is palindrom\n";
	}
	else
	{
		std::cout<<"The given number is not palindrom\n";
	}

	return 0;

}

