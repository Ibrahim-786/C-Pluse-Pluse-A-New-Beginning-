#include<iostream>
#include<fstream>

int main()
{
	std::ofstream outfile("myfile");

	outfile<<"hello";

	outfile<<" 25  ";

	outfile<<"world";

	outfile.close();

	return 0;
}

