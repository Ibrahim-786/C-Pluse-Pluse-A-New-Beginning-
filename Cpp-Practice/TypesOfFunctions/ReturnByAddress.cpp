#include<iostream>
int arr[5] = {1,3,4,5,6};

int* add()
{

	return &arr[0];
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



