#include<iostream>

int one(char a)
{
	std::cout<<"call back one : "<<a<<" \n";
	return 0;
}



int two(char b)
{
	std::cout<<"call back two: "<<b<<" \n";
	return 0;
}

int three(char c) 
{
	std::cout<<"call back three: "<<c<<" \n";
	return 0;
}

int four(char d)
{
	std::cout<<"call back four: "<<d<<" \n";
	return 0;
}

int five(char e)
{
	std::cout<<"call back five:  "<<e<<"\n";
	return 0;
}

int six(char f)
{
	std::cout<<"call back six:  "<<f<<"\n";
	return 0;
}

int seven(char g)
{
	std::cout<<"call back seven: "<<g<<" \n";
	return 0;
}

int eight(char h)
{
	std::cout<<"call back eight: "<<h<<" \n";
	return 0;
}

int nine(char i)
{
	std::cout<<"call back nine: "<<i<<" \n";
	return 0;
}

int ten(char j)
{
	std::cout<<"call back ten: "<<j<<" \n";
	return 0;
}


int main()
{

	std::cout<<"int (*p[10])(char a) \n \
p is 10-element array of pointers to functions \n \ 
each function accepts an argument which is \n \
 a character and returns an integer quantity\n";

	int (*ptr[10])(char a);

	ptr[0] = &one;
	ptr[1] = &two;
	ptr[2] = &three;
	ptr[3] = &four;
	ptr[4] = &five;
	ptr[5] = &six;
	ptr[6] = &seven;
	ptr[7] = &eight;
	ptr[8] = &nine;
	ptr[9] = &ten;


	std::cout<<"Calling Functions Using function pointer \n";

	char arg = 65;
	for(int i=0;i<10;i++)
	{
		if((*ptr[i])(arg++))
		{
			std::cout<<"call back failed\n";
		}
		else
		{
			std::cout<<"call back pass\n";
		}
	}

	return 0;
}


