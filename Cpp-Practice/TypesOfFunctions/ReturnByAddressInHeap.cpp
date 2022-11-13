#include<iostream>


int* add()
{
	int *ptr = new int [5];

	for(int i=0; i<5; i++)
	{
		ptr[i] = i+2;
	}

	return ptr;
}




int main(int argc, char *argv[])
{


	int *ptr = add();

	for(int i=0;i<5;i++)
	{
		std::cout<<ptr[i]<<" ";
	}

	std::cout<<"\n";

	return 0;
}



