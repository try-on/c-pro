#include <stdio.h>

int main()
{
    int firstValue;
    int secondValue;
    
    scanf("%d %d", &firstValue, &secondValue);
    
    int a = secondValue;
    int b = firstValue;
    
    printf("firstValue = %d\n", a);
    printf("secondValue = %d", b);

    return 0;
}
