#include<iostream>



class Rectangle
{

	public:
		int length;
		int breath;

	int area()
	{
		return length*breath;
	}

	int perimeter()
	{

		return 2*(length*breath);
	}

};


int main(int argc, char *argv[], char *envs[])
{

	Rectangle *R1, obj;

	R1= &obj;

	R1->length = 10;
	R1->breath = 20;

	std::cout<<"Area is : "<<R1->area();

	std::cout<<"\n"<<"Perimeter is : "<<R1->perimeter();

	return 0;
}

