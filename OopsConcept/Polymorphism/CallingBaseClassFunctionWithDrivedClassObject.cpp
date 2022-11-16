#include<iostream>



class base
{


	public: 

		void display()
		{
			std::cout<<"display of base classs \n";
		}

};


class drived : public base
{

	public: 
		void display(int x)
		{
			std::cout<<"display of drived class \n";
		}
};



int main()
{


	base b;

	b.display();

	drived d;

	d.display(10);

	d.base::display();


	return 0;
}


