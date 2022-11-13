#include<iostream>




class Rational
{
	int p;
	int q;

	public:
	Rational(int p=0,int q=0)
	{
		this->p = p;
		this->q = q;
	}

	Rational operator+ (Rational r)
	{
		Rational temp;

		temp.p = p*r.p;
	        temp.q = q*r.q;
		return temp;
	}

	void display()
	{
		std::cout<<p<<"/"<<q;
	}
};


int main()
{
	Rational R1(10,20), R2(10,12);

	Rational R3 = R1+R2;

	R3.display();

	return 0;
}




