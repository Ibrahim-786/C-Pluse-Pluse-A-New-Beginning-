#include<iostream>



int main()
{

	std::cout<<"usage of : int (*p)[10];\n";
	
	int (*p)[10];

	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	p= &arr;

	for(int i=0;i<10;i++)
	{

		std::cout<<(*p)[i]<<"\n";
	}

	return 0;
}

