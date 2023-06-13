#include<iostream>


int main(int argv, char * argc[])
{

	enum number 
	{one=1,
	two,
	three,
	four,
	five,
	six,
	seven,
	eight,
	nine,
	ten};


	number One=one;
	number Two=two;

	std::cout<<One<<" "<<Two<<std::endl;


	return 0;

}


