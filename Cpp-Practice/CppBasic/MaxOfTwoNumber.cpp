#include<iostream>


int Max(int Var1, int Var2)
{

	int Temp;

	if(Var1 > Var2)
	{
		Temp = Var1;
	}
	else if(Var1 < Var2)
	{
		Temp = Var2;
	}
	else
	{
		std::cout<<"Both the numbers are Equal\n";
		Temp =0;
	}
	return Temp;
}

		

int main(int argc, char *argv[])
{


	int NumOne;
	int NumTwo;

	std::cout<<"enter two numbers\n";
	std::cin>>NumOne>>NumTwo;

	int MaxNum = Max(NumOne,NumTwo);

	if(MaxNum)
	{
		std::cout<<"max is "<<MaxNum;
	}


	return 0;
}
