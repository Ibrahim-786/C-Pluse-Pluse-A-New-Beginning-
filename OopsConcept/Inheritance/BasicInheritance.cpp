#include<iostream>



class base
{
	public:
		int x;
	
		void show()
		{
			std::cout<<"value of x: "<<x<<"\n";
		}
};

class drived : public base
{
	public:
		int y;
		void display()
		{
			std::cout<<"value of y: "<<y<<"\n";
		}
};

int main()
{
	base b;

	b.x = 25;

	b.show();

	drived d;

	d.y =10;
	d.x =15;

	d.show();
	d.display();

	return 0;
}


