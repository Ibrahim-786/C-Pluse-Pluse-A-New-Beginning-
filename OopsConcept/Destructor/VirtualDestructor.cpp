#include<iostream>

class base
{
	public:
		base()
		{
			std::cout<<"base constructor\n";
		}

	 	virtual  ~base()
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
	base *p = new derived;

	delete p;

	return 0;
}

