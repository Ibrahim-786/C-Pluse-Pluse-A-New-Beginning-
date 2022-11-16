#include<iostream>



class car
{
	public: 
		//pure virtual function
		virtual void start() = 0;

		//pure virtual function
		virtual void stop()   = 0;

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


	//below line give error
	//we can't create object of abstract class
	//if a class have atleat one pure virtula function then class become abstract clas
	car obj;

	car *c = new innova;

	c->start();

	c = new swift;

	c->start();

	return 0;
}


