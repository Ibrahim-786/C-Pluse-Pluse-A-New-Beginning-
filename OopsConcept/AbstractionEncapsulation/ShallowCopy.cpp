#include<iostream>


class test
{
//	public:

	int a;
	int *p;

	public:

	test (int x)
	{
		a=x;
		p=new int [a];
	}

	test (test &t)
	{
		a= t.a;
		p= t.p;
	}

	void checkaddress()
	{
		std::cout<<this->p<<"\n";
	}

	
};

//problem with Copy constructor is it will not allocate memory to pointer
//it will still point to same memory 


int main()
{


	test t1(10);
	test t2(t1);

	std::cout<<"expected a same address\n";
	t1.checkaddress();
	t2.checkaddress();

	return 0;
}
