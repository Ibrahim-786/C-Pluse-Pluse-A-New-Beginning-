#include <bits/stdc++.h>

const int array_size = 3;


void print_2D_array(int arr[][array_size]){
    
    for(int i = 0; i<array_size; i++){
        for(int j = 0; j<array_size ; j++)
        {
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    
    
 
    
}

int (*(create_2D_array)())[array_size]
{
    static int two_d_array[][3] = {{2,3,4},{5,6,7},{8,9,10}};
    
    
    return two_d_array;
    
    
}

int main() {


int (*arr)[array_size]  = create_2D_array(); 

print_2D_array(arr);
    
	return 0;
}
