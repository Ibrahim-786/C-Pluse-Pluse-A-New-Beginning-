#include<iostream>
#include<fstream>



class student
{
	public:
		std::string name;
		int roll;
		std::string branch;

		friend std::ofstream& operator<<(std::ofstream& of,student s1);

};

std::ofstream& operator<<(std::ofstream& of,student s1)
{
	of<<s1.name;
	of<<s1.roll;
	of<<s1.branch;

	return of;
}


int main()
{

	student s1;

	s1.name = "pasha";
	s1.roll = 7;
	s1.branch = "EC";

	std::ofstream of("OverloadedStudent.txt",std::ios::trunc);
	
//	of<<s1.name;
//	of<<s1.roll;
//	of<<s1.branch;
//
	of<<s1;

	return 0;
}
