#include <stdio.h>

void input(int* n){
    
    scanf("%d", n);
    
}    

void output(int x){
    
 if(x%2 == 0){
     
     printf("true");
    
 }    
    
    else{
        
        printf("false");
        
    }
    
}


int main()
{
 
 
int n;

input(&n);

output(n);


 
 
}
