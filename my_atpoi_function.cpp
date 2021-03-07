#include <bits/stdc++.h>
//#include <string>

//implementing my own atoi function [asici to integer conversion]
//eg: "123"  x= 123

int my_atoi_function(std::string  my_string)
{
    int sign = 1;
    
    int index = 0;
    
    int ret = 0;
    

    
    if(my_string[0] == '-'){
        sign =  -1;
        index++;
        
    }
    
    for(;my_string[index] != '\0'; index++)
    {
       
        //                somevaue - 48
        //57-48
        
        //0 48
        //1 49
        //2 50 ... so on
        ret = ret*10 + my_string[index] - '0';
       
    }
    

    
    return ret*sign;
    
    
}


int main() {
	
	
std::string my_string_no = "953801531";
	
	int my_integer = my_atoi_function(my_string_no);
	
	std::cout<<"integer value of string :"<<my_string_no<<" is "<<my_integer<<std::endl;
	
	return 0;
}
