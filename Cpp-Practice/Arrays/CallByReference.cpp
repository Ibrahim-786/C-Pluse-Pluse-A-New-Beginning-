#include<iostream>



void Printval(int &x)
{


	x= 20;

}





int main(int argc, char *argv[])
{

	int x =10;

	Printval(x);


	std::cout<<x<<"\n";

	return 0;
}
