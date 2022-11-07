#include<iostream>

//perfect numbers 6,28,496,8128,

//perfect number eg
//6   1+ 2+3 == 6
//28  1+ 2+ 4+ 7 + 14 == 28

#define Ok 0
#define Not_Ok 1

bool PerfectNum(int num)
{
	int temp = 0;

	for(int i =1; i<num; i++)
	{
		if(num%i == 0)
		{
			temp += i;
		}
	}

	if(temp == num)
	{
		return Ok;
	}
	else
	{
		return Not_Ok;
	}

}


int main(int argc, char *argv[])
{

	int num;

	std::cout<<"enter a number to check perfect or not\n";

	std::cin>>num;

	bool check = PerfectNum(num);

	if (check == Ok)
	{
		std::cout<<"number "<<num<<" is perfect number";
	}
	else
	{
		std::cout<<"number "<<num<<" is not perfect number";
	}

	return 0;
}

	

