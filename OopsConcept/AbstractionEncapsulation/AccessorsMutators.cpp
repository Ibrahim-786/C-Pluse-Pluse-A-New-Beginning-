#include<iostream>


class Rectangle
{

	private:
		int length;
		int breath;

	public:
		void setlength(int l)
		{
			length = l;
		}
		void setbreath(int b)
		{
			breath = b;
		}
		int getlength()
		{
			return length;
		}
		int getbreath()
		{
			return breath;
		}

		int area()
		{
			return length*breath;
		}
		int perimeter()
		{
			return 2*(length*breath);
		}
};


int main(int argc, char *argv[])
{

	Rectangle R1;

	R1.setlength(10);

	R1.setbreath(20);

	std::cout<<"length is "<<R1.getlength()<<"\n";
	std::cout<<"breath is "<<R1.getbreath()<<"\n";

	std::cout<<"Area is: "<<R1.area()<<"\n";
	std::cout<<"Perimeter is: "<<R1.perimeter()<<"\n";

	return 0;
}
	
