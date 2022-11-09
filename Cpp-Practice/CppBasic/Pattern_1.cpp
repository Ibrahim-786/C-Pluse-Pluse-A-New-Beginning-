#include<iostream>



int main(int argc, char *argv[])
{

	int first = 4;
	int Row = 4;

	for(int i=0;i<Row;i++)
	{		
		for(int k=0;k<i;k++)
		{
			std::cout<<"  ";

		}


		for(int j=first-i;j>0;j--)
		{

			std::cout<<"* ";
		}

		std::cout<<"\n";
	}




	return 0;
}
