#include<iostream>


class employe
{

	private:
		int eid;
		std::string name;
	public:
		employe(int e, std::string n)
		{
			this->eid = e;
			this->name = n;
		}

		int getemployeid()
		{
			return this->eid;
		}
		std::string getname()
		{
			return this->name;
		}
};

class fulltime_employe : public employe
{
	private:
		int salary;
	public:
		fulltime_employe(int e, std::string n, int sal):employe(e,n)
		{
			this->salary = sal;
		}

		int getsalary()
		{
			return this->salary;
		}

	friend std::ostream& operator<<(std::ostream& o, fulltime_employe f);
	
};

std::ostream& operator<<(std::ostream& o, fulltime_employe f)
{
	o<<"name : "<<f.getname()<<"\n"<<"employe id: "<<f.getemployeid()<<"\n"<<"salary : "<<f.getsalary()<<"\n";

	return o;
}


class parttime_employe: public employe
{
	private:
		int wages;
	public:
		parttime_employe(int e, std::string n, int wag):employe(e,n)
		{
			this->wages = wag;
		}

		int getwages()
		{
			return this->wages;
		}


	friend std::ostream& operator<<(std::ostream& o, parttime_employe p);
};


std::ostream& operator<<(std::ostream& o, parttime_employe p)
{
	o<<"name : "<<p.getname()<<"\n"<<"employe id: "<<p.getemployeid()<<"\n"<<"salary : "<<p.getwages()<<"\n";

	return o;
}

int main()
{

	fulltime_employe  ft1(8,"naveed",1000);

	parttime_employe pt1(7,"ibrahim",800);

	std::cout<<"Full Time Employe Data\n";


	std::cout<<ft1;

	std::cout<<"\n\n";
	
	std::cout<<"Part Time Employe Data\n";

	std::cout<<pt1;


	return 0;
}

