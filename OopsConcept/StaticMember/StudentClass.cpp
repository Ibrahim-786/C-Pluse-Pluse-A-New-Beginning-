#include<iostream>


class student 
{
	public:
		int rollno;

		static int admissionno;
	
		student ()
		{
			rollno = admissionno*2;
			admissionno++;
		}
};

int student::admissionno = 1;


int main()
{

	student s1;

	student s2;

	student s3;


	std::cout<<"number of admissions are : "<<student::admissionno;

	return 0;
}


