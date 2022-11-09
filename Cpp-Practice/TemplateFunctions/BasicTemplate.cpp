#include<iostream>


template <class T>
T max(T x, T y)
{
	return x>y?x:y;
}



int main(int argc, char *argv[])
{

	std::cout<<"interger max using template (10,20) = "<<max(10,20)<<"\n";


	std::cout<<"float max using template (10.5f,20.5f) = "<<max(10.5f,20.0f)<<"\n";
	return 0;
}

