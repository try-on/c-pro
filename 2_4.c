#include <stdio.h>

int main()
{
   int a;
   int b;
   int c;
   
   
   scanf("%1d %1d %1d", &a, &b, &c);
   
   if(a == b && a == c && b == c){
       
       printf("HIGH");
       
       return 0;
       
   }
   

   
   if((a == b) || (a == c) || (b == c)){
       
       printf("MEDIUM");
       
       return 0;
       
   }
   
 
   
  if(a != b && a != c && b != c){
      
      printf("LOW");
      
  }

    return 0;
}
