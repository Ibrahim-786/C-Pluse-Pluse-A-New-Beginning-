#include<iostream>



class test
{
	private:

		int a;

	protected :
		int b;
	public:
		int c;

//declaring a frind function 
friend void fun();


};

void fun()
{
	test t;
//error no access since it is private and protected in test class
	t.a =10;
	t.b =20;
//no error
 	t.c =30;


}	


int main()
{

	std::cout<<"hello frind function \n";
	return 0;
}

