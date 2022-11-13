#include<iostream>



class complex
{
	private:
		int real;
		int img;

	public:
	complex (int r=0,int i=0)
	{
		real = r;
		img  = i;
	}

  friend std::ostream& operator<<(std::ostream &o, complex &c);
};

std::ostream & operator <<(std::ostream &o, complex &c)
{
	o<<c.real;
	o<<"+i"<<c.img<<std::endl;

	return o;
}



int main()
{

	complex c1(10,15);
	std::cout<<c1;
	
	return 0;
}

