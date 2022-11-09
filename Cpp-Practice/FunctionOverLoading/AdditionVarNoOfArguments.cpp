#include<iostream>

int add(int x,int y)
{
	return x+y;
}

int add(int x, int y, int z)
{
	return x+y+z;
}


int add(int x,int y,int z, int a)
{
	return x+y+z+a;
}


int main(int argc, char *argv[])
{

	std::cout<<"add (10 12) =  "<<add(10,12)<<" \n";

	std::cout<<"add (10,12,13) = "<<add(10,12,13)<<" \n";

	std::cout<<"add (10,12,13,14) = "<<add(10,12,13,14)<<" \n";

	return 0;
}







