#include<iostream>

int arr[10];

int* one(char *a)
{
	std::cout<<"call back one : "<<*a<<" \n";
	return &arr[0];
}



int* two(char *b)
{
	std::cout<<"call back two: "<<*b<<" \n";
	return &arr[1];
}

int* three(char *c)
{
	std::cout<<"call back three: "<<*c<<" \n";
	return &arr[2];
}

int* four(char *d)
{
	std::cout<<"call back four: "<<*d<<" \n";
	return &arr[3];
}

int* five(char *e)
{
	std::cout<<"call back five:  "<<*e<<"\n";
	return &arr[4];
}

int* six(char *f)
{
	std::cout<<"call back six:  "<<*f<<"\n";
	return &arr[5];
}

int* seven(char *g)
{
	std::cout<<"call back seven: "<<*g<<" \n";
	return &arr[6];
}

int* eight(char *h)
{
	std::cout<<"call back eight: "<<*h<<" \n";
	return &arr[7];
}

int* nine(char *i)
{
	std::cout<<"call back nine: "<<*i<<" \n";
	return &arr[8];
}

int* ten(char *j)
{
	std::cout<<"call back ten: "<<*j<<" \n";
	return &arr[9];
}


int main()
{


	std::cout<<"int *(*p[10])(char *a) \n \
p is 10-element array of pointers to functions; each function accepts an argument which is \n \
a pointer to a character and returns a pointer to an integer quantity\n";


	int* (*ptr[10])(char *a);

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
	char *argptr;

	int *retptr;

	for(int i=0;i<10;i++)
	{
		arr[i] = i+1;
	}

	for(int i=0;i<10;i++)
	{
		argptr = &arg;
		
		retptr = (*ptr[i])(argptr);

		std::cout<<"call back pass addr:  "<<retptr<<"   value : "<<*retptr<<"\n";
		arg++;
	}

	return 0;

}
