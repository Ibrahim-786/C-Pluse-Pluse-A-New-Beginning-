#include<iostream>
#include<fstream>



int main()
{
	std::ifstream infile;

	infile.open("myfile");

	if(!infile)
	{
		std::cout<<"file can't open\n";
	}
	else
	{
		std::string str,str2;
		int x;
		infile>>str;
		infile>>x;
		infile>>str2;
		std::cout<<str<<" "<<x<<" "<<str2<<"\n";
		if(infile.eof())
		{
			std::cout<<"end of file \n";
			infile.close();
		}
	}

	return 0;
}

