#include <bits/stdc++.h>

//student class to demonstrate operator overloading 
class student{
    
    //private variable
    int roll_no;
    int account_no;
    
    public:
    
	// non parameterized constructor to initialize student class
        student():roll_no(static_cast<int>(1)),account_no(static_cast<int>(1)){
            std::cout<<"default constructor has been called  \n";
        }
        
	// constructor with initialization list
        student(int roll,int account):roll_no(roll),account_no(account){
            std::cout<<"parameterized constructor has been called"<<"\n";
        }
	
        //insertion operator overloading
        friend std::ostream& operator<<(std::ostream &out,student& obj1);
        //exsertion operator overloading
        friend std::istream& operator>>(std::istream &out,student& obj1);
        
        
};


std::ostream& operator<<(std::ostream &out,student& obj1)
{
    out<<obj1.roll_no<<" "<<obj1.account_no<<std::endl;
    
    return out;
}

std::istream& operator>>(std::istream &intput,student& obj1)
{
    intput>>obj1.roll_no>>obj1.account_no;
    
    return intput;
}



int main() {
    
	
	//parameterized constructor has been called
	student object1(10,27);
	
	//overloaded exsertion operator has been called
	std::cout<<object1;
	//default constructor has been called
	student object2;
	
	std::cout<<object2;
	
	//overloaded exsertion operator has been called
	std::cin>>object2;
	
	std::cout<<object2;
	
	return 0;
}
