#include<iostream>


class test
{

	private:
		int *p;
	public:

	test()
	{
		p = new int [10];

		std::cout<<"constructor \n";
	}

	~test()
	{
		delete []p;
		std::cout<<"destructor \n";
	}
};

void fun()
{
	test *p = new test();
	delete p;
}

int main()
{
	fun();


	return 0;
}

