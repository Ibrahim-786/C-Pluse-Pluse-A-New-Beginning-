#include<iostream>
#include<string.h>

int main(int argc, char *argv[])
{

	int num;

	std::cout<<"enter a number to display a digits of it\n";

	std::cin>>num;

	int size = printf("%d",num);  
	int arr[size];
	int index=0;
	std::cout<<"\n";
	while(num > 0)
	{

		//std::cout<<num%10<<" ";
		arr[index++] = num%10;

		num = num/10;

	}

	for(int i=size-1;i>=0;i--)
	{
		std::cout<<arr[i]<<" ";
	}


	return 0;
}
