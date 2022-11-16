#include<iostream>


class test
{
	private:
		int a;
		int b;

	public:
		static int count;

		test()
		{
			a=0;
			b=0;
			count++;

		}

		static int getcount()
		{
			count++;

			//static member function can only modify static data member
			//error
			//a++;
			//
			//
			//error
			//return a;
			
			return count;
		}
};

int test::count = 0;

int main()
{
	std::cout<<"count before creating any object \n"<<test::getcount()<<"\n";

	test t;

	std::cout<<"count after creating obj: "<<t.getcount()<<"\n";

	std::cout<<test::getcount();

	return 0;
}



