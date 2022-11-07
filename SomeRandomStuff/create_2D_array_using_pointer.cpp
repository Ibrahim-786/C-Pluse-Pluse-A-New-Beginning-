#include <bits/stdc++.h>

const int array_size = 3;


void print_2D_array(int **arr){
    
    
    for(int i = 0 ; i< array_size ; i++){
        
        for(int j= 0 ; j< array_size; j++){
           std::cout<<arr[i][j]<<" ";
        }
        delete  arr[i];
        std::cout<<"\n";
    }
    delete [] arr;
    
}

int** create_2D_array()
{
    int **arr = new int*[array_size];
    
    for(int i = 0 ; i< array_size ; i++)
    {
        arr[i] =  new int[array_size] ;
        
        for(int j= 0; j<array_size; j++)
        {
            arr[i][j] = 10;
        }
    }
    
    
    return arr;
    
    
}

int main() {


int **arr ; 

    arr = create_2D_array();
    print_2D_array(arr);
    
	return 0;
}
