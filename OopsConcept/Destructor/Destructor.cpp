#include<iostream>


class test
{
	public:
		test()
		{
			std::cout<<"test created\n";
		}

		~test()
		{
			std::cout<<"test destroyed\n";
		}

};

int main()
{
	test *p = new test;

	delete p;

	test var;



	return 0;
}


