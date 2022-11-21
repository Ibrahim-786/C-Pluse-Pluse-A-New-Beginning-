#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>


#define MIN_BALANCE 500

class insufficentfunds{

};

class Account
{
	private:
		long accno;
		std::string firstname;
		std::string lastname;
		float balance;
		static long nextaccountnumber;

	public:
		Account()
		{

		}

		Account(std::string fname, std::string lname,float balance);
		
		long getaccno()
		{
			return this->accno;
		}
		std::string getfirstname()
		{
			return this->firstname;
		}

		std::string getlastname()
		{
			return this->lastname;
		}

		float getbalance()
		{
			return this->balance;
		}

		void deposite(float amount);

		void withdraw(float amount);

		static void setlastaccno(long accno);
		static long getlastaccno();


	friend std::ofstream & operator<<(std::ofstream &ofs,Account &acc);
 	friend std::ifstream & operator>>(std::ifstream &ifs,Account &acc);
 	friend std::ostream & operator<<(std::ostream &os,Account &acc);



};

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

long Account::nextaccountnumber=0;


class Bank
{

	private:
		std::map<long,Account> accounts;

	public:
		Bank();
		Account openaccount(std::string fname,std::string lname,float balance);
		Account balanceenquiry(long accno);
		Account deposite(long accno, float amount);
		Account withdraw (long accno, float amount);
		void closeaccount(long accno);
		void showallaccount();

		~Bank();
};


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




Bank::Bank()
{
 
 	Account account;
 	std::ifstream infile;
 	infile.open("Bank.data");
 	if(!infile)
 	{
 		//cout<<"Error in Opening! File Not Found!!"<<endl;
 		return;
	}
 	while(!infile.eof())
 	{
 		infile>>account;
 		accounts.insert(std::pair<long,Account>(account.getaccno(),account));
 	}

 	Account::setlastaccno(account.getaccno());
 
 	infile.close();
 
}

Account Bank::openaccount(std::string fname,std::string lname,float balance)
{
 	std::ofstream outfile;
 	Account account(fname,lname,balance);
 	accounts.insert(std::pair<long,Account>(account.getaccno(),account));
 
 	outfile.open("Bank.data", std::ios::trunc);
 
 	std::map<long,Account>::iterator itr;
 	for(itr=accounts.begin();itr!=accounts.end();itr++)
 	{
 		outfile<<itr->second;
 	}
 	outfile.close();
 	return account;
}

Account Bank::balanceenquiry(long accountNumber)
{
 	std::map<long,Account>::iterator itr=accounts.find(accountNumber);
 	return itr->second;
}

Account Bank::deposite(long accountNumber,float amount)
{
 	std::map<long,Account>::iterator itr=accounts.find(accountNumber);
 	itr->second.deposite(amount);
 	return itr->second;
}

Account Bank::withdraw(long accountNumber,float amount)
{
 	std::map<long,Account>::iterator itr=accounts.find(accountNumber);
 	itr->second.withdraw(amount);
 	return itr->second;
}

void Bank::closeaccount(long accountNumber)
{
 	std::map<long,Account>::iterator itr=accounts.find(accountNumber);
 	std::cout<<"Account Deleted"<<itr->second;
 	accounts.erase(accountNumber);
}

void Bank::showallaccount()
{
 	std::map<long,Account>::iterator itr;
 	for(itr=accounts.begin();itr!=accounts.end();itr++)
 	{
 		std::cout<<"Account "<<itr->first<<std::endl<<itr->second<<std::endl;
 	}
}

Bank::~Bank()
{
 	std::ofstream outfile;
 	outfile.open("Bank.data", std::ios::trunc);
 
 	std::map<long,Account>::iterator itr;
 	for(itr=accounts.begin();itr!=accounts.end();itr++)
 	{
 		outfile<<itr->second;
 	}
 	outfile.close();
}


int main(int argc, char *argv[])
{
	Bank b;
 	Account acc;
 
 	int choice;
 	std::string fname,lname;
 	long accountNumber;
 	float balance;
 	float amount;
 	std::cout<<"***Banking System***"<<std::endl;
 
 	do
 	{
 		std::cout<<"\n\tSelect one option below ";
 		std::cout<<"\n\t1 Open an Account";
 		std::cout<<"\n\t2 Balance Enquiry";
 		std::cout<<"\n\t3 Deposit";
 		std::cout<<"\n\t4 Withdrawal";
 		std::cout<<"\n\t5 Close an Account";
 		std::cout<<"\n\t6 Show All Accounts";
 		std::cout<<"\n\t7 Quit";
 		std::cout<<"\nEnter your choice: ";
 		std::cin>>choice;
 
 		switch(choice)
 		{
 			case 1:
 				std::cout<<"Enter First Name: ";
				std::cin>>fname;
				std::cout<<"Enter Last Name: ";
				std::cin>>lname;
				std::cout<<"Enter initil Balance: ";
				std::cin>>balance;
 				acc=b.openaccount(fname,lname,balance);
 				std::cout<<std::endl<<"Congradulation Account is Created"<<std::endl;
 				std::cout<<acc;
				break;
 			case 2:
 				std::cout<<"Enter Account Number:";
				std::cin>>accountNumber;
 				acc=b.balanceenquiry(accountNumber);
 				std::cout<<std::endl<<"Your Account Details"<<std::endl;
 				std::cout<<acc;
				break;
 			case 3:
 				std::cout<<"Enter Account Number:";
				std::cin>>accountNumber;
				std::cout<<"Enter Balance:";
				std::cin>>amount;
 				acc=b.deposite(accountNumber, amount);
 				std::cout<<std::endl<<"Amount is Deposited"<<std::endl;
 				std::cout<<acc;
				break;
 			case 4:
 				std::cout<<"Enter Account Number:";
 				std::cout<<"Enter Account Number:";
				std::cin>>accountNumber;
				std::cout<<"Enter Balance:";
				std::cin>>amount;
 				acc=b.withdraw(accountNumber, amount);
 				std::cout<<std::endl<<"Amount Withdrawn"<<std::endl;
 				std::cout<<acc;
				break;
 			case 5:
 				std::cout<<"Enter Account Number:";
				std::cin>>accountNumber;
 				b.closeaccount(accountNumber);
 				std::cout<<std::endl<<"Account is Closed"<<std::endl;
 				std::cout<<acc;
 			case 6:
 				b.showallaccount();
 				break;
 			case 7: break;
 				default:
 				std::cout<<"\nEnter corret choice";
				exit(0);
 		}


 	}while(choice!=7);


	return 0;

}
