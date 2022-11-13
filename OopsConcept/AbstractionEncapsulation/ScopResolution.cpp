#include<iostream>


class test
{
//	public:

	int a;
	int *p;

	public:
	test (int x);
	test (test &t);
	void checkaddress();
};

test::test (int x)
{
	a=x;
	p=new int [a];
}

test::test (test &t)
{
	a= t.a;
	p= t.p;
}

void test::checkaddress()
{
	std::cout<<this->p<<"\n";
}

	
int main()
{


	test t1(10);
	test t2= t1;

	std::cout<<"expected a same address\n";
	t1.checkaddress();
	t2.checkaddress();

	return 0;
}
