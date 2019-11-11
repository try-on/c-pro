#include <stdio.h>
void input(int* a, int* x){
    
    scanf("%d %d", a, x);
    
}

void output(int y){
    
    printf("%d", y);
    
}

int sqr(int a, int x){
    
    int b = 1;
    
     for(int i = 0; i < x; i++){
         
         b = b *a;
         
         
     }
    return b;
}

int main()
{
 
 
int a;
int x;

input(&a,&x);
output(sqr(a, x));


 
}
