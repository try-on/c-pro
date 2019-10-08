#include <stdio.h>
#include <math.h>

int main()
{
   double V;
   double T;
   double cost;
   double I;
   
   scanf("%lf %lf", &T, &V);
   
   I = (T * V) / 1024;
   cost = (I - 1) * 10;
   
   printf("%.0f %.0f", I, cost);
}
