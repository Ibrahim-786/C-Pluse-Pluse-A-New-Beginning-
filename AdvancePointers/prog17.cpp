#include<iostream>

int one()
{
	std::cout<<"call back one \n";
	return 0;
}



int two()
{
	std::cout<<"call back two \n";
	return 0;
}

int three() 
{
	std::cout<<"call back three \n";
	return 0;
}

int four()
{
	std::cout<<"call back four\n";
	return 0;
}

int five()
{
	std::cout<<"call back five \n";
	return 0;
}

int six()
{
	std::cout<<"call back six \n";
	return 0;
}

int seven()
{
	std::cout<<"call back seven \n";
	return 0;
}

int eight()
{
	std::cout<<"call back eight \n";
	return 0;
}

int nine()
{
	std::cout<<"call back nine \n";
	return 0;
}

int ten()
{
	std::cout<<"call back ten \n";
	return 0;
}



int main()
{


	std::cout<<"int (*p[10])(void) \n \
 p is 10-element array of pointers to functions \n \ 
 each function returns an integer quantity\n";


	int (*ptr[10])(void);

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

	for(int i=0;i<10;i++)
	{
		if((*ptr[i])())
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



