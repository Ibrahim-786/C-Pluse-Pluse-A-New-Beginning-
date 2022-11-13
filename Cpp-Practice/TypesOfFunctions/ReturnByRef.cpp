#include<iostream>


int& add(int &x)
{


	return x;
}




int main(int argc, char *argv[])
{
	int x=10;

	add(x) = 25;

	std::cout<<x;



	return 0;
}



