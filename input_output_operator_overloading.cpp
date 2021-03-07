#include <bits/stdc++.h>
class student{
    
    
    int roll_no;
    int account_no;
    
    public:
    
        student():roll_no(static_cast<int>(1)),account_no(static_cast<int>(1)){
            std::cout<<"default constructor has been called  \n";
        }
        
        student(int roll,int account):roll_no(roll),account_no(account){
            std::cout<<"parameterized constructor has been called"<<"\n";
        }
        
        friend std::ostream& operator<<(std::ostream &out,student& obj1);
        
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
    
	
	
	student object1(10,27);
	
	
	std::cout<<object1;
	
	student object2;
	
	std::cout<<object2;
	
	std::cin>>object2;
	
	std::cout<<object2;
	
	return 0;
}
