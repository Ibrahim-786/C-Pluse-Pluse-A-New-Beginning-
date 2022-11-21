#include<iostream>

char arr[10] ;


int fun(char *a[10])
{
	for(int i=0;i<10;i++)
	{
		std::cout<<"*a["<<i<<"] = "<<*a[i]<<"\n";
	}
	
	return 0;
}


int main()
{

	std::cout<<"int p(char *a[]) \n \
 p is a function that accepts an argument which is a array of pointers to characters \n \
 returns an integer quantity \n";	
 	

 	char *arrpointer[10];
 	
	arr[0] = 'I';
	arr[1] = 'B';
	arr[2] = 'R';
	arr[3] = 'A';
	arr[4] = 'H';
	arr[5] = 'I';
	arr[6] = 'M';
	arr[7] = 'P';
	arr[8] = 'A';
	arr[9] = 'S';
	
	for(int i =0;i<10;i++)
	{
		arrpointer[i] = &arr[i];
	}

	std::cout<<fun(arrpointer);
		
	return 0;

}

