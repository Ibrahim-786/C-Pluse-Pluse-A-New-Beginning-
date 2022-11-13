#include<iostream>


int add(int x, int y)
{
	int sum =x+y;

	x =30;
	y =40;

	std::cout<<"value of x and y in add()"<<" "<<x<<" "<<y<<"\n";

	return sum;
}




int main(int argc, char *argv[])
{

	int x =10;
	int y =20;

	
	std::cout<<x<<" "<<y<<"\n";
	std::cout<<add(x,y)<<std::endl;

	

	return 0;
}



