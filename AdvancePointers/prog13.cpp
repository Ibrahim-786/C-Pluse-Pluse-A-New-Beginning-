#include<iostream>

int arr[10] ;


int* fun(char *a[10])
{
	for(int i=0;i<10;i++)
	{
		std::cout<<"*a["<<i<<"] = "<<*a[i]<<"\n";
	}
	
	return arr;
}


int main()
{

	std::cout<<" int *p(char *a[])  \n \
p is a function that accepts an argument which is an array of pointers to characters  \n \
returns a pointer to an integer quantity\n";
 	

 	char arrpointer[10];
 	
	arrpointer[0] = 'I';
	arrpointer[1] = 'B';
	arrpointer[2] = 'R';
	arrpointer[3] = 'A';
	arrpointer[4] = 'H';
	arrpointer[5] = 'I';
	arrpointer[6] = 'M';
	arrpointer[7] = 'P';
	arrpointer[8] = 'A';
	arrpointer[9] = 'S';

	char *arrcharpointer[10];
	for(int i=0;i<10;i++)
	{
		arrcharpointer[i] = &arrpointer[i];
	}
	
	for(int i=0;i<10;i++)
	{
		arr[i] = i+2;
	}

	int *ret = fun(arrcharpointer);

	for(int i=0;i<10;i++)
	{
		std::cout<<ret[i]<<"\n";
	}
	

	return 0;

}

