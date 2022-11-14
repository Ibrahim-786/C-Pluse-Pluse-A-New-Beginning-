#include<iostream>



class Rectangle
{
	private:
		int length;
		int breath;

	public:
		Rectangle(int l=0,int b=0)
		{
			this->length= l;
		        this->breath = b;
		}
		int getlength()
		{
			return length;
		}
		int getbreath()
		{
			return 	breath;
		}
		void setlength(int l)
		{
			this->length=l;
		}
		void setbreath(int b)
		{
			this->breath= b;
		}
		
	
		int area()
		{
			return length*breath;
		}
		int peri()
		{
			return 2*(length*breath);
		}

};

class Cubic : public Rectangle
{
	private:
		int heigth;
	public:
		Cubic(int h=0,int l=0,int b=0 )
		{
			this->heigth=h;
			setlength(l);
			setbreath(b);
		}

		int getheigth()
		{
			return this->heigth;
		}
		void setheigth(int h)
		{
			this->heigth = h;
		}

		int volumn()
		{
			return getlength()*getbreath()*this->heigth;
		}

		friend std::ostream& operator<<(std::ostream &o,Cubic c);

};

std::ostream& operator<<(std::ostream &o, Cubic c)
{

	o<<"length: "<<c.getlength()<<"\n"<<"breath : "<<c.getbreath()<<"\n"<<"heigth :"<<c.heigth<<"\n";
	return o;
}

int main()
{
	Cubic c(10,4,6);

	std::cout<<"length is l: "<<c.getlength()<<"\n";

	std::cout<<"area is : "<<c.area()<<"\n";

	std::cout<<"volumn is : "<<c.volumn()<<"\n";
	
	std::cout<<c;


	return 0;
}


