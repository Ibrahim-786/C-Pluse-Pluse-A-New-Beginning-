#include<iostream>



int main()
{

	std::cout<<"usage of : int *p[10];\n";

	int *p[10];

	int a,b,c,d,e,f,g,h,i,j;

	a=10;
	b=20;
	c=30;
	d=40;
	e=50;
	f=60;
	g=70;
	h=80;
	i=90;
	j=100;

	p[0] = &a;
	p[1] = &b;
	p[2] = &c;
	p[3] = &d;
	p[4] = &e;
	p[5] = &f;
	p[6] = &g;
	p[7] = &h;
	p[8] = &i;
	p[9] = &j;

	for(int i=0;i<10;i++)
	{
		std::cout<<"address : "<<p[i]<<"value: "<<*p[i]<<"\n";
	}

	return 0;	

}

