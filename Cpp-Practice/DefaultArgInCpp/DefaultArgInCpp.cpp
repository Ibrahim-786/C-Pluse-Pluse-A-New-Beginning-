#include<iostream>

int add(int x, int y, int z=0)
{
	return x+y+z;
}


int main(int argc, char *argv[])
{


	int c= add(2,5);
	
	std::cout<<c<<" \n";


	int d= add(2,5,10);
	
	std::cout<<d<<" \n";

	int e= add(2,5,0);
	
	std::cout<<e<<" \n";

	return 0;
}



