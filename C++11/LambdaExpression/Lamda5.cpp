#include<iostream>


int main()
{

	int ret = [](int x, int y)->int {return x+y;}(10,5);

	std::cout<<"sum of (10,5) : "<<ret<<"\n";

	return 0;
}

