#include<iostream>



class car
{
	public: 
		virtual void start()
		{
			std::cout<<"car start \n";
		}

		virtual void stop()
		{
			std::cout<<"car stop \n";
		}
};


class innova: public car
{
	public:
		void start()
		{
			std::cout<<"innova started \n";
		}

		void stop()
		{
			std::cout<<"stop innova \n";
		}
};


class swift: public car 
{
	
	public:
		void start()
		{
			std::cout<<"swift started \n";
		}

		void stop()
		{
			std::cout<<"swift innova \n";
		}
};


int main()
{

	car obj;

	car *c = new innova;

	c->start();

	c = new swift;

	c->start();

	return 0;
}


