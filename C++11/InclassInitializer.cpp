#include<iostream>

class test
{
	int x=10;
	int y=13;

	public:
		test(int x,int y)
		{
			this->x = x;
			this->y = y;
		}

		test():test(1,1)
		{

		}

		int getx()
		{
			return this->x;
		}
		int gety()
		{
			return this->y;
		}
};

int main()
{
	test t;

	std::cout<<t.getx()<<" "<<t.gety();

	return 0;
}

