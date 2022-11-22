#include"../inc/Bank.h"


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
