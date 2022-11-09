#include<iostream>

#define Ok 0
#define Not_ok 1

bool BinarySearch(int *ptr, int size, int key,int &index)
{

	//sort in ascending order
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			int temp  ;

			if(ptr[i]>ptr[j])
			{
				temp= ptr[i];
				ptr[i]= ptr[j];
				ptr[j]=temp;
			}
		}
	}

	std::cout<<"sorted array is \n";
	for(int x=0;x<size; x++)
	{
		std::cout<<ptr[x]<<" ";
//		printf("%d ",ptr[x]);
	}
	
	//printf("\n");
	std::cout<<"\n";

	
	int pos = size/2;

	

	while((pos >=0) && (pos < size))
	{
		if(ptr[pos] == key)
		{
			index=pos;
			return Ok;
		}
		else 
		{
			if(ptr[pos]>key)
			{
				pos = pos-1;
			}
			else
			{
				pos = pos+1;
			}
		}
	}



	return Not_ok;
}




int main(int argc, char *argv[])
{


	int arr[5] = {5,1,3,2,4};

	std::cout<<"enter num out of below to do binary search\n";

	for(auto x: arr)
	{

		std::cout<<x<<" ";
	}
	std::cout<<"\n";

	int key, get_index;

	std::cin>>key;

	if(BinarySearch(arr,5,key,get_index))
	{
		std::cout<<"Key not Found\n";
	}
	else
	{
		std::cout<<"Key Found At index "<<get_index<<"\n";
	}



	return 0;

}
