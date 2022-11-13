#include<iostream>

class complex
{
	private:
		int real;
		int img;

	public:
	complex(int r=0, int i=0)
	{
		real = r;
		img = i;
	}
	void display()
	{
		std::cout<<real<<"+i"<<img;
	}

	friend complex operator+ (complex c1, complex c2);
};

complex operator +(complex c1, complex c2)
{

	complex temp;

	temp.real = c1.real+c2.real;
	temp.img  = c1.img+c2.img;

	return temp;
}


int main()
{
	complex c1(5,3), c2(10,5), c3;

	c3 = c1+c2;

	std::cout<<"c1 : ";
	c1.display();
	std::cout<<"\n";
	std::cout<<"c2 : ";
	c2.display();
	std::cout<<"\n";
	std::cout<<"c3 : ";
	c3.display();
	std::cout<<"\n";

	return 0;
}
