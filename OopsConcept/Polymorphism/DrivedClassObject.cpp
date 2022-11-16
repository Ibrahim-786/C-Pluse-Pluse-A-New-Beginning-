#include<iostream>


class base
{
	public:
		void fun()
		{
			std::cout<<"fun base class\n";
		}
			

};

class drived : public base
{
	public:
		void fun2()
		{
			std::cout<<"fun 2 drived class \n";
		}

};


int main()
{

	drived d;

	d.fun();
	d.fun2();
	return 0;
}



