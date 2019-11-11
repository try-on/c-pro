#include <stdio.h>

int main()
{
    int a[3];
    
    for(int i = 0; i < 3; ++i){
        
        scanf("%d", &a[i]);
        
    }
    
    int i = 0;
    
    while(a[i] >= 0 && i < 3){
        
        i++;
        
    }
    
    if(i < 3){
    
    printf("%d",a[i]);
        
    }

    return 0;
}
