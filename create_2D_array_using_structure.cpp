#include <bits/stdc++.h>
const int size = 3;

struct arr_wrap{
    
    int arr[size][size];
};


void print_2D_array(arr_wrap obj){
    
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size ; j++)
        {
            std::cout<<obj.arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    
    
 
    
}

arr_wrap create_array()
{
    arr_wrap temp;
    
     for(int i = 0; i<size; i++){
        for(int j = 0; j<size ; j++)
        {
            temp.arr[i][j] = 30;
        }
     
    }
    
    return temp;
    
    
}

int main() {


arr_wrap obj = create_array(); 

print_2D_array(obj);
    
	return 0;
}
