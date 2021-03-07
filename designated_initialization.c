#include <stdio.h>
struct student{
    
    char *name;
    int rollno;
    int regno;
    
};


//note:  it will only work for c not c++ 
 
int main(void) {
	
	//designated initialization for array
	int arr[5] = {[1] = 20,[4]= 30};
	
	
	int i;
	
	for(i=0; i<5; i++)
	    printf("%d ",arr[i]);
	    
	    
	printf("\n");
	    
	    //designated initialization for structure 
	struct student s1 = {.rollno = 10, .name = "ibrahim",.regno= 27 };
	
	
	printf("name: %s rollno: %d regno %d\n",s1.name,s1.rollno,s1.regno);
	
	
	
	
	
	
	
	return 0;
}

