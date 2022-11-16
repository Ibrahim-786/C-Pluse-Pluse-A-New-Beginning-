#include<iostream>




class parent 
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;

		void fun_parent()
		{
			a =10;
			b =20;
		        c =30;
		}
};

class child: public parent
{
	protected:
	
	public:
		void fun_child()
		{
			b =15;
			c =15;
		}
};

class grandchild: public child
{
	protected:
	
	public:
		void fun_grandchild()
		{
			b=10;
			c=10;
		}
};

int main()
{

	grandchild c1;

//	c1.b =20;
	c1.c=10;

	return 0;
}
