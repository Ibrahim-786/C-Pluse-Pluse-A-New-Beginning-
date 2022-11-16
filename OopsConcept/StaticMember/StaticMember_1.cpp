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
	std::cout<<"\n"<<"accessing static variable using class name and static data member \n";
	std::cout<<test::count<<"\n";

	//static member can be changed using class::static-var
	test::count = 20;

	std::cout<<"test::cout=20 : "<<test::count<<"\n";\

	t1.count =25;

	std::cout<<"t1.count = 25: "<<t1.count<<"\n";

	t2.count = 30;

	std::cout<<"t2.count = 30: "<<t2.count<<"\n";	


	return 0;
}





