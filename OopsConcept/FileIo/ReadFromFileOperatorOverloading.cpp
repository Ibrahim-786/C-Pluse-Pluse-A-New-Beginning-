#include<iostream>
#include<fstream>



class student
{
	public:
		std::string name;
		int roll;
		std::string branch;

		friend std::ifstream& operator>>(std::ifstream& of,student s1);

};

std::ifstream& operator>>(std::ifstream& ifs,student s1)
{
	ifs>>s1.name;
	ifs>>s1.roll;
	ifs>>s1.branch;

	return ifs;
}


int main()
{

	student s1;


	std::ifstream  ifs;
		ifs.open("OverloadedStudent.txt");
	

//	ifs<<s1.name;
//	ifs<<s1.roll;
//	ifs<<s1.branch;

	ifs>>s1;

		std::cout<<s1.name<<" "<<s1.roll<<" "<<s1.branch;


	return 0;
}
