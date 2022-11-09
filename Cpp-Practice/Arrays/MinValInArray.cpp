#include<iostream>


int main(int argc, char *argv[])
{


	int arr[6] = {1,2,3,4,5,0};


	std::cout<<"size of array is "<<sizeof(arr)<<"\n";

	int min = arr[0];


	for(int x: arr)
	{
		if(x < min)
		{
			min =x;
		}
	}

	std::cout<<"minimum of the array is "<<min<<"\n";




	return 0;

}
