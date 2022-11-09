#include<iostream>




int SumOfArray(int *ptr,int size)
{
	int sum = 0;

	for( int x =0; x<size;x++)
	{
		sum+=ptr[x];
	}

	return sum;
}


int main(int argc, char * argv[])
{

	int arr[5] = {2,3,4,5,6};
	
	std::cout<<SumOfArray(arr,5);

	return 0;
}

