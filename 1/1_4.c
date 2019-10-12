#include <stdio.h>
#include <math.h>

int main()
{
   double AMb;
   double AKb;
   double b;
   
   scanf("%lf", &b);
   
   AMb = b / 1024 / 1024;
   AKb = b / 1024;
   
   printf ("%.1f b = %.1f Mb\n", b, AMb);
   printf ("%.1f b = %.1f Kb\n", b, AKb);
   
    return 0;
}
