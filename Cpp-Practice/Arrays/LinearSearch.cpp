#include<iostream>


#define Ok 0
#define Not_Ok 1


bool LinearSearch(int *ptr, int size,int key,int& Index)
{

	for(int i =0 ;i<size; i++)
	{
		if(ptr[i]==key)
		{
			Index = i;
			return Ok;
		}
	}
	return Not_Ok;

}



int main(int argc, char *argv[])
{

	int arr[5] = {2,3,4,5,6};

	std::cout<<"enter a number from below to find it \n";
	for(int x: arr)
	{

		std::cout<<x<<" ";
	}
	std::cout<<"\n";

	int key, Get_Index;
	std::cin>>key;

	if(LinearSearch(arr,5,key,Get_Index))
	{
		std::cout<<"key not found\n";
	}
	else
	{

		std::cout<<"key found At Index "<<Get_Index<<"\n";
	}

	

	return 0;
}
