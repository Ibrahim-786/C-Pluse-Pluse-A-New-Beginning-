#include<iostream>

/*
Armstrong number 1: 0
Armstrong number 2: 1
Armstrong number 3: 153    (1*1*1)+(5*5*5)+(3*3*3) == 153
Armstrong number 4: 370
Armstrong number 5: 371
Armstrong number 6: 407 */

int main(int argc, char *argv[])
{


	int num;

	std::cout<<"enter a number \n";

	std::cin>>num;

	int ArmStrongSum=0;

	int temp = num;
	while(temp > 0)
	{
		int reminder = temp%10;
		ArmStrongSum += reminder*reminder*reminder;

		temp = temp/10;
	
	}

	if(ArmStrongSum == num)
	{
		std::cout<<"ArmStrong number\n";
	}
	else
	{
	
		std::cout<<"Not ArmStrong number\n";
	}



	return 0;
}
	
