#include<iostream>



int main(int argc, char * argv[], char *argenv[])
{

	int num ;

	std::cout<<"enter the number \n";

	std::cin>>num;

	int ReversNumber = 0;

	while(num > 0)
	{
		int r= num%10;

		num = num/10;

		ReversNumber = ReversNumber*10+r;
	}

	std::cout<<ReversNumber<<"\n";

	return 0;

}
