#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include"../inc/Bank.h"


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
