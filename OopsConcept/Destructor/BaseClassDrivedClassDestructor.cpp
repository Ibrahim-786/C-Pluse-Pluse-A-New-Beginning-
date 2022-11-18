#include<iostream>

class base
{
	public:
		base()
		{
			std::cout<<"base constructor\n";
		}

		~base()
		{
			std::cout<<"base destructor \n";
		}
};

class derived : public base
{
	public:
		derived()
		{
			std::cout<<"derived constructor \n";
		}

		~derived()
		{
			std::cout<<"drived destructor \n";
		}
};


int main()
{
	derived d;

	return 0;
}

