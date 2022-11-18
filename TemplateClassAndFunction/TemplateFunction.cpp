#include<iostream>




template <class t>
t max(t x, t y)
{
	return x>y?x:y;
}

int main()
{

	std::cout<<"max of (10,15) "<<max(10,15)<<"\n";

	std::cout<<"max of (10.5f,10.15f) "<<max(10.5f,10.15f)<<"\n";
	std::cout<<"max of (a,b) "<<max('a','b')<<"\n";


	return 0;
}

