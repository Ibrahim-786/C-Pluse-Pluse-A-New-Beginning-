#include<iostream>



int main(int argc, char *argv[])
{

	int num;

	std::cout<<"enter a number\n";
	std::cin>>num;

	int cout =0 ;

	for(int i =1; i<=num; i++)
	{
		if(num %i == 0)
		{
			cout++;
			std::cout<<" "<<i<<" ";
		}
	}


	std::cout<<"\n count is "<<cout<<"\n";

	if(cout == 2)
	{
		std::cout<<"number "<<num<<" is prim number \n";
	}
	else
	{
		std::cout<<"number "<<num<<" is not a prim number \n";
	}

	return 0;
}


