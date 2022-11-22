#include"../inc/Account.h"



long Account::nextaccountnumber=0;

Account::Account(std::string fname, std::string lname,float balance)
{

	nextaccountnumber++;
	this->accno = nextaccountnumber;

	this->firstname= fname;
	this->lastname = lname;

	this->balance = balance;
}

void Account::deposite(float amount)
{
	this->balance = amount;
}

void Account::withdraw(float amount)
{
	if(this->balance < MIN_BALANCE)
	{
		throw insufficentfunds();
	}
	else
	{
		this->balance-=amount;
	}
}

void Account::setlastaccno(long accno)
{

	nextaccountnumber = accno;

}

long Account::getlastaccno()
{
	return nextaccountnumber;
}


std::ofstream & operator<<(std::ofstream &ofs,Account &acc)
{
 	ofs<<acc.accno<<std::endl;
 	ofs<<acc.firstname<<std::endl;
 	ofs<<acc.lastname<<std::endl;
 	ofs<<acc.balance<<std::endl;
 	return ofs;
}

std::ifstream & operator>>(std::ifstream &ifs,Account &acc)
{
 	ifs>>acc.accno;
 	ifs>>acc.firstname;
 	ifs>>acc.lastname;
 	ifs>>acc.balance;
 	return ifs;
 
}

std::ostream & operator<<(std::ostream &os,Account &acc)
{
 	os<<"First Name:"<<acc.getfirstname()<<std::endl;
 	os<<"Last Name:"<<acc.getlastname()<<std::endl;
 	os<<"Account Number:"<<acc.getaccno()<<std::endl;
 	os<<"Balance:"<<acc.getbalance()<<std::endl;
 	return os;
}

