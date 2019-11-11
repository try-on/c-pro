#include <stdio.h>
void input(int* x){
    scanf("%d", x);
}
void output(int x){
    
    printf("%d", x);
    
}

int sqr(int x){
    
    return x * x; 
    
}

int main()
{
 
 int x;
 
 input(&x);
 
 output(sqr(x));
 
 
 
 
}
