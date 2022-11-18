#include<iostream>

int main()
{

	int a=10;
	int b=20;

	[a,b](){std::cout<<a<<" "<<b;}();

	return 0;
}

