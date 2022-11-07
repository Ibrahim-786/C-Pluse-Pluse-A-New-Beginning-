#include<iostream>



int main(int argc, char *argv[])
{
	int exp;

	std::cout<<"enter exp\n";

	std::cin>>exp;


	switch(exp)
	{
		case 1:
			std::cout<<"number is 1\n";
			break;
		case 2:
			std::cout<<"number is 2\n";
			break;

		case 3:
			std::cout<<"number is 3\n";
			break;
		case 4: 
			std::cout<<"number is 4\n";
			break;
		default:
			std::cout<<"number is out of range\n";
	}

	return 0;
}


			
