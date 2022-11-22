#include<iostream>
#include<fstream>


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
