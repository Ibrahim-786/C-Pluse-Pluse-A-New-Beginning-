#include<iostream>



class shape
{
	public:
		virtual int area() = 0;
		virtual int perimeter() = 0;
};


class rectangle: public shape
{
	private:
		int length;
		int breath;

	public:
		rectangle(int l, int b)
		{
			this->length = l;
			this->breath = b;
		}

		int area()
		{
			return this->length*this->breath;
		}

		int perimeter()
		{
			return 2*(this->length*this->breath);
		}
};

class circle : public shape
{
	private:
		int radius;
	public:
		circle(int r)
		{
			this->radius = r;
		}

		int area()
		{
			return 3*radius*radius;
		}

		int perimeter()
		{
			return 2*3.4*radius;
		}
};


int main()
{

	shape *s = new rectangle(10,5);

	std::cout<<"area of rectangle "<<s->area()<<"\n";

	std::cout<<"perimeter of rectangle "<<s->perimeter()<<"\n";


	s= new circle(7);

	std::cout<<"area of circle "<<s->area()<<"\n";

	std::cout<<"perimeter of rectangle "<<s->perimeter()<<"\n";

	return 0;
}






