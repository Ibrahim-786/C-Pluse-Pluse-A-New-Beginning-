#include<iostream>



class test
{
	public:
		void fun()
		{
			std::cout<<"fun() By default inline if we write inside class\n";
		}
		

		inline void fun2();
};

void test::fun2()
{

	std::cout<<"if we are writing outside of class we should specify inline keyword\n";
	std::cout<<"fun2 outside class but inline \n";
}

int main()
{

	test t1;

	t1.fun();
	t1.fun2();
}


