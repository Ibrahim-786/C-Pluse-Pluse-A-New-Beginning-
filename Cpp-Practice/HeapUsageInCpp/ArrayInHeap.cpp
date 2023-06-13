#include<iostream>



int main(int argc, char *argv[])
{


	int *ptr = new int[10];

	for(int i=0; i<10 ;i++)
	{
		ptr[i] = i+2;
	}

	for(int i=0;i<10;i++)
	{
		std::cout<<ptr[i]<<" ";
	}
	

	delete []ptr;
	return 0;
}
