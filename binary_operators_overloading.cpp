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
        
        //destructor
        ~student()
        {
            
            std::cout<<"i am died : "<<this<<std::endl;
        }
        
        friend std::ostream& operator<<(std::ostream &out,student& obj1);
        
        friend std::istream& operator<<(std::istream &out,student& obj1);
        
        
        
        student operator+(const student & rhs)
        {
            student temp;
            
            temp.roll_no = roll_no+rhs.roll_no;
            temp.account_no = account_no+rhs.account_no;
            
            return temp;
        }
        
           student operator-(const student & rhs)
        {
            student temp;
            
            temp.roll_no = roll_no-rhs.roll_no;
            temp.account_no = account_no-rhs.account_no;
            
            return temp;
        }
        
           student operator*(const student & rhs)
        {
            student temp;
            
            temp.roll_no = roll_no*rhs.roll_no;
            temp.account_no = account_no*rhs.account_no;
            
            return temp;
        }
        
           student operator/(const student & rhs)
        {
            student temp;
            
            temp.roll_no = roll_no/rhs.roll_no;
            temp.account_no = account_no/rhs.account_no;
            
            return temp;
        }
        
        
           student operator&(const student & rhs)
        {
            student temp;
            
            temp.roll_no = roll_no&rhs.roll_no;
            temp.account_no = account_no&rhs.account_no;
            
            return temp;
        }
        
           student operator|(const student & rhs)
        {
            student temp;
            
            temp.roll_no = roll_no|rhs.roll_no;
            temp.account_no = account_no|rhs.account_no;
            
            return temp;
        }
        
        
        
        
        student operator=(const student & rhs)
        {
            
            
            this->roll_no = rhs.roll_no;
            this->account_no = rhs.account_no;
            
            return *this;
        }
        
           bool operator==(const student & rhs)
        {
            
            
             return roll_no==rhs.roll_no && account_no == rhs.account_no?true:false;
            
            
        }
        
        
        
};


std::ostream& operator<<(std::ostream &out,student& obj1)
{
    out<<obj1.roll_no<<" "<<obj1.account_no<<std::endl;
    
    return out;
}

std::istream& operator<<(std::istream &intput,student& obj1)
{
    intput>>obj1.roll_no>>obj1.account_no;
    
    return intput;
}



int main() {
    
	
	
	student object1(10,27);
	
	student object2(10,27);
	
	student object3 = object1+object2;
	object3 = object1*object2;
	
	student object4 = object1-object2;
	student object5 ;
	student object6 = object4&object5;
	student object7 = object5|object6;
	
	
	std::cout<<"object1: "<<&object1<<" \n"<<"object2  "<<&object2<<" \n"<<"object3 : "<<&object3<<" \n"<<"object4 : "<<&object4<<std::endl;
	std::cout<<object3;
	
	bool equal = object1==object2;
	
	std::cout<<"object1 and object2 are equal "<<equal<<std::endl;
	
	student s1(4,16);
	student s2(2,4);
	student s3 = s1/s2;
	
	std::cout<<s3<<std::endl;
	
	return 0;
	
}
