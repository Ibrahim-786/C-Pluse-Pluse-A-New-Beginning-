#include<iostream>


int max(int x=0,int y=1,int z=0)
{

	return x>y?x>z?x:z:y>z?y:z;
}


int main(int argc, char *argv[])
{



	std::cout<<"max of(10,20) = "<<max(10,20)<<"\n";

	std::cout<<"max of (10,20,30) = "<<max(10,20,30)<<"\n";

	std::cout<<"max of default arg (0,1,0) = "<<max()<<"\n";

	return 0;
}


