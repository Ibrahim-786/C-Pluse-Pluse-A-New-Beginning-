#include<iostream>



class Rectangle
{
	public:
		//default constructor or Non-parameterized constructor
		Rectangle()
		{
			this->length = 1;
			this->breath = 1;
		}

		//parameterized constructor
		Rectangle(int l,int b)
		{
			length = l;
			breath = b;
		}

		//Copy constructor
		Rectangle(Rectangle &Ref)
		{
			length = Ref.length;
			breath = Ref.breath;
		}
		int area()
		{
			return length*breath;
		}
		int perimeter()
		{
			return 2*(length*breath);
		}

		int& setlength()
		{
			return length;
		}
		int& setbreath()
		{
			return breath;
		}

	private:
		int length;
		int breath;
};


int main()
{

	//default constructor or Non-parameterized constructor
	Rectangle R1;

	std::cout<<"Default constructor or Non-parameterized constructor\n";
	std::cout<<R1.area();


	//parameterized constructor
	Rectangle R2(10,20) ;

	std::cout<<"parameterized constructor \n";
	std::cout<<R2.area()<<"\n";


	//copy constructor/ shallow copy
	Rectangle R3(R2) ;

	std::cout<<"Copy constructor/ Shallow copy\n";
	std::cout<<R3.area()<<"\n";


	//setting length and breath with reference 
	R1.setlength() =10;
	R1.setbreath() =20;

	std::cout<<"\narea of object R1 after setting to lengt and breath 10 and 20 is : "<<R1.area();


	

	return 0;
}
