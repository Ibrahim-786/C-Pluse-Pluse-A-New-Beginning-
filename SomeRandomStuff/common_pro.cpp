/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;

int my_atio(char arr[])
{
    
    int sign = 1;
    int int_num= 0;
    int index = 0;
    
    if(arr[0]== '-'){
        sign = -1;
        index++;
    }
    
    for(; arr[index]!= '\0'; index++){
        
        int_num = int_num*10+arr[index]-'0';
        
    }
    
    return int_num*sign;
    
    
    
}

int palindram(int pali){
    
    
    //reverse a number to check palindram
    int reverse=0;
    
    while(pali){
        
        reverse= reverse*10+pali%10;
        pali = pali/10;
        
        
    }
    
    return reverse;
    
    
}
int prime(int number){
    
    int counter = 0;
    for(int i =1; i<= number; i++)
    {
        if(number%i == 0)
        {
            counter++;
        }
        
    }
    return counter;
    
}

int factorial(int fact){
    
    int y= 1;
    int facto = 1;
    printf("\n");
    
    for(int i=1;i<=fact; i++){
        
        facto= i*facto;
        printf("%d  ", facto);
        
    }
    
    return facto;
    
    
}

void figonacci(int series){
    printf("\n the figonacci series for : ");
    
    int x= 0;
    int y =1;
    for(int i =1; i<= series; i++){
        printf("%d ", x);
        int temp = x;
        x= x+y;
        y= temp;
    }
}

int main(int argv, char *argch[])
{
    cout<<"Hello World \n";
    cout<<argv<<" "<<argch[0]<<" "<<argch[1]<<endl;
    int pali;
    
    pali = my_atio(argch[1]);
   int pali_eligible =  printf("%d",pali);
    
    
    if(pali_eligible >=  3)
    {
      if(pali == palindram(pali)){
        cout<<"\n this number is palindram";
      }
      else
      {
        cout<<"\n this number is not a palindram";
        
      }
    }
    
    cout<<" \n factorial of pali is : "<<factorial(pali);
    
    if(prime(pali)>2){
        cout<<"\n the given no is not a prime number";
        
    }
    else{
        cout<<" \n the given number is  prime number";
    }
    
    int upto= my_atio(argch[2]);
    
    figonacci(upto);

    return 0;
}
