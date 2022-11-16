#include<iostream>


class outer
{
	public:
		int a =10;
		static int b;

		void fun()
		{
			i.display();
		}

		class inner
		{
			public:
				void display()
				{
					std::cout<<"display of inner\n";
				}
		};

		inner i;
};


int main()
{
	outer o;

	o.fun();


	outer::inner I;

	I.display();
	return 0;
}

