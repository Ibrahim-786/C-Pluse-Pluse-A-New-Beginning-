#include<iostream>


class base
{
	public:
		void fun()
		{
			std::cout<<"fun \n";
		}
			
		void fun2()
		{
			std::cout<<"fun2 \n";
		}

		void fun3()
		{
			std::cout<<"fun3 \n";
		}

};

class drived : public base
{
	public:
		void fun4()
		{
			std::cout<<"fun 4 \n";
		}
		void fun5()
		{
			std::cout<<"fun 5 \n";
		}

};


int main()
{
	base *p;

	p = new drived ;

	p->fun();

	p->fun2();

	p->fun3();

//	p->fun4();

//	p->fun5();

	return 0;
}



