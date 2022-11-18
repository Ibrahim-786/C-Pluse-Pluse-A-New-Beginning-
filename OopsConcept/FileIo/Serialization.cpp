#include<iostream>
#include<fstream>



class student
{
	public:
		std::string name;
		int roll;
		std::string branch;
};

int main()
{

	student s1;

	s1.name = "pasha";
	s1.roll = 7;
	s1.branch = "EC";

	std::ofstream of("student.txt",std::ios::trunc);
	
	of<<s1.name;
	of<<s1.roll;
	of<<s1.branch;





	return 0;
}
