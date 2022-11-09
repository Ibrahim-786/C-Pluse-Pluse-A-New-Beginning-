#include<iostream>


int min(int var1, int var2)
{
	return var1==var2?var1:var1>var2?var2:var1;
}

int max(int var1, int var2)
{

	return var1==var2?var1:var1>var2?var1:var2;

}

int main(int argc, char *argv[])
{


	int (*fptr) (int, int);

	fptr = max;

	std::cout<<(*fptr)(10,20)<<"\n";

	fptr = min ;

	std::cout<<(*fptr)(10,20)<<"\n";

	return 0;
}









