#include <bits/stdc++.h>


//program to find loop in linkedlist  
//1) mark each node 
//2) keep a hash set of all node seen so for
//3) catch loops in two passes (floyad's cyclic finding algorithm or the tortise and hare algorithm)

//
//linkked list is collection of node with self referencial pointer
//  ------      ----------      ---------        ---------
// |      |----|          |----|         |------|         | 
//  ------      ----------      ---------        ---------



//  in this program i am using mark each loop

const std::string emp_names[7] = {"naveed","muyeen","momin","tousif","kiran","suhail","dileep"};
const int emp_id[7] = {700,701,702,703,704,705,706};

class employee{
    
    public:
        std::string NAME;
        int EMP_NO ;
        employee *linker;
        
        
        
    employee(std::string name,int emp_no):NAME(name),
    EMP_NO(static_cast<int>(emp_no)),linker(NULL)
    {
         
        std::cout<<"constructor has been called \n";
    }
    
    ~employee()
    {
        
    }
    
    friend std::ostream& operator<<(std::ostream &out,employee obj );
        
       
};

std::ostream& operator<<(std::ostream &out,const employee* obj ){
    
    out<<"emplye name is: "<<obj->NAME<<"         employe id is : "<<obj->EMP_NO<<"\n";
    
    return out;
}

void create_nodes(employee *arg_ptr,const int no_of_nodes ){
    
    if(no_of_nodes == 0 && no_of_nodes > 7){
        std::cout<<"we can't create node for this input \n";
    }
    
    else{
        
        employee* temp = arg_ptr;
        
        for(int index = 0; index < no_of_nodes ;   index++){
            
            temp->linker = new employee(emp_names[index],emp_id[index]);
            
            temp = temp->linker;
        }
        
    }
    

    
}

void print_my_list(employee* print_node){
    
    employee* temp = print_node;
    
    for(; temp->linker != NULL; ){
        
        std::cout<<temp;
        temp = temp->linker;
        
    }
    
    std::cout<<temp;
    
    delete print_node ;
    delete temp;
    print_node  = NULL;
    temp = NULL;
    
    
}

int main() {
    
    employee *node = new employee("ibrahim",27);
    int no_of_nodes ;
    
    std::cout<<node;
    
   
    std::cout<<"enter less then or equal to 7: \n";
    
    std::cin>>no_of_nodes;
    
    create_nodes(node,no_of_nodes);
    
    print_my_list(node);
    
    
    delete node;
     
    node  = NULL;

	return 0;
}