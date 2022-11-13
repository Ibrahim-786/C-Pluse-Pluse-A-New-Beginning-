#include<iostream>



void func()
{

	static int x =10;

	
	std::cout<<x<<" \n";
	x++;

}

int main()
{


	for(int i=0;i<5;i++)
	{

		func();

	}

	return 0;
}

	
