#include<iostream>



class base
{
	public:
		void fun()
		{
			std::cout<<"fun of base class\n";
		}

		virtual void fun2()
		{
			std::cout<<"fun2 of base class \n";
		}
};

class drived : public base
{
	public:
		void fun2()
		{
			std::cout<<"fun2 of drived class\n";
		}
};


int main()
{

	drived d;

	base *p  = new drived ;

	p->fun();

	p->fun2();

	p->


	return 0;

}

