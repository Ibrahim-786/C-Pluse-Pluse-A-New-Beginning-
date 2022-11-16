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
			a= 10;
			b= 10;
			count++;
		}
};


//must
int test::count=0;

int main()
{
	test t1,t2;

	std::cout<<"count of t1 and t2 is same"<<"\n"<<"t1 count :"<<t1.count<<"\n"<<"t2 count: "<<t2.count;
	std::cout<<"\n"<<"accessing static variable using class name with object \n";
	std::cout<<test::count<<"\n";


	return 0;
}





