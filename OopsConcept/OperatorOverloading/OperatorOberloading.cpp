#include<iostream>

class complex
{
	public:
		int real;
		int img;
	complex add(complex c)
	{
		complex temp;

		temp.real = real+c.real;
		temp.img  = img+c.img;

		return temp;
	}
};

int main()
{
	complex c1, c2, c3;
	c1.real = 5; c1.img = 6;
	c2.real = 7; c2.img = 8;

	c3 = c1.add(c2);

	std::cout<<c3.real<<" "<<c3.img<<"\n";

	return 0;
}
