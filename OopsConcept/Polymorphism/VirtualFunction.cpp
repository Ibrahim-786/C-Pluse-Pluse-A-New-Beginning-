#include<iostream>




class base
{

	public:
		virtual void fun()
		{
			std::cout<<"fun of base \n";
		}
};

class drived: public base
{
	public: 
		void fun()
		{
			std::cout<<"fun of drived \n";
		}
};


int main()
{

	drived d;

	base *ptr;

	ptr = &d;

	d.fun();

	ptr->fun();

	return 0;

}
