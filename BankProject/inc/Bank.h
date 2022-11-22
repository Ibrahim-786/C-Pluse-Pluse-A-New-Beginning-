#include<map>
#include"Account.h"



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
