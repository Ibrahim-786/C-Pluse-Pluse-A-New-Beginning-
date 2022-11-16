#include<iostream>


class parent 
{
	public:
		void display()
		{
			std::cout<<"Display of parent \n";
		}
};


class child: public parent
{
	public:
		 void display()
		 {
			 std::cout<<"Display of child \n";
		 }
};

int main()
{
	parent p;

	p.display();

	child c;

	c.display();
}




