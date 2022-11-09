#include<iostream>


int max (int x, int y)
{

	return x>y?x:y;
}

float max (float x, float y)
{
	return x>y?x:y;
}


int main(int argc, char *argv[])
{

	std::cout<<"integer max(10,20) = "<<max(10,20)<<" \n";

	std::cout<<"float max(10.5,10.9) = "<<max(10.5f,10.9f)<<"\n";

	return 0;
}


