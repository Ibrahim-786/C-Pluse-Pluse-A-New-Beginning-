#include<iostream>

int MaxInArray(int *ptr, int size)
{

	int temp =0;

	for(int i =0; i<size; i++)
	{
	
		if(temp < ptr[i])
		{
			temp = ptr[i];
		}

	}

	return temp;


}


int main(int argc, char *argv[])
{


	int arr[5] = {2,3,4,5,6};


	std::cout<<MaxInArray(arr,5);


	return 0;
}
