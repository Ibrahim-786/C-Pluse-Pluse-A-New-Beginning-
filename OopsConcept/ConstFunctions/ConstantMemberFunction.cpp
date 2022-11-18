// Example: of Constant member function

#include<iostream>
using namespace std;

class Demo
{
	int x;

	public:
	
	void set_data(int a)
	{
		x=a;
	}

	int get_data() const		 //constant member function
	{
		++x;				 // Error while attempting to modify the data member
		return x;
	}

};


main()
{
	Demo d;
	d.set_data(10);
	cout<<endl<<d.get_data();

	return 0;
}

