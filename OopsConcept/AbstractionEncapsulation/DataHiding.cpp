#include<iostream>



class Rectangle
{

	//by default private
		int length;
		int breath;

	public:


	void setlengthandbreath(int l,int b)
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


int main(int argc, char *argv[], char *envs[])
{

	Rectangle R1, R2;


	R1.setlengthandbreath(10,5);

	std::cout<<"Area is : "<<R1.area();

	std::cout<<"\n"<<"Perimeter is : "<<R1.perimeter();

	return 0;
}

