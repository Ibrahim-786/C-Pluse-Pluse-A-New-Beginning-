#include <iostream>
using namespace std;


//sizeof is not function it is operator

double check_sizeof(void){
    
    std::cout<<"check_sixzeof is called  \n";
    
}


int main() {
    
    int x = 10;
    
    std::cout<<sizeof(++x)<<std::endl;
    
    std::cout<<"x value remains same: "<<x<<std::endl;
    
    
    std::cout<<"it will check only return value of function not function call  : "<<sizeof(check_sizeof())<<std::endl;
    
    
    
    

	return 0;
}
