#include<iostream>



class base
{
	public:
		base()
		{
			std::cout<<"Non parameterized base"<<"\n";
		}

		base(int x)
		{
			std::cout<<"parameterized base "<<x<<"\n";
		}
};

class drived : public base
{
	public:
		drived()
		{
		
			std::cout<<"Non parameterized drived"<<"\n";
		}
		
		drived(int y)
		{

			std::cout<<"parameterized drived "<<y<<"\n";
		}

		drived(int x,int y):base(x)
		{
			std::cout<<"param of drived "<<y<<"\n";
		}
};

int main()
{
	drived d;

	drived d1(10);

	drived d2(10,5);

	return 0;
}
