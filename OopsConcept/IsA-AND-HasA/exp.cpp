#include<iostream>



class Rectangle
{
	public:
	private:
	protected:
};


//is Rectangle
class cubic: public Rectangle
{

};

//has a rectangle
class table
{
	public:
		Rectangle top;
		int leg;
};


int main()
{

	Rectangle r1;
	cubic c1;
	table t1;

	return 0;
}

