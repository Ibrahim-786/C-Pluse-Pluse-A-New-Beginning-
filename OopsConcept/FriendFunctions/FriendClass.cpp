#include<iostream>

class your;

class my
{
	private:
		int a= 10;

	friend your;
};

class your
{
	private:
		my m;
	public:

	void fun()
	{
		std::cout<<m.a;
	}
};



int main()
{
	std::cout<<"friend class \n";

	your y;
	y.fun();

	return 0;
}

