#include<iostream>



int main(int argc, char *argv[])
{



	int *ptr = new int ;


	*ptr = 10;

	std::cout<<ptr<<" "<<*ptr;

	return 0;
}
