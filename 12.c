#include <iostream>


using namespace std;
int main()
{
   
   srand(time(NULL));
   
   
   const int SIZE = 10;
   
   int mass[SIZE];
   
   for(int i = 0; i < SIZE; i++){
       
       mass[i] = rand()%10;
       
   }
   
   int max = 0;
   int maxJ = 0;
   
   for(int i = 0; i < SIZE; i++){
       
       if(mass[i] > max){
           
           max = mass[i];
           maxJ = i;
           
       }
       
   }
   
    
   for(int i = 0; i < SIZE; i++){
       
      cout << mass[i] << "\t";
       
   }
   
   
    cout << "--------------------------------------------------------------------------"; 
   
    cout << endl << "Max: " << max;
   
   int minJ = 0;
   int min = 10;
   
    for(int i = 0; i < SIZE; i++){
       
       if(mass[i] < min){
           
           min = mass[i];
           minJ = i;
           
       }
       
   }
   
 
   cout <<endl << "Min: " << min << endl;
   
    cout << "--------------------------------------------------------------------------" << endl; 
   
   int sum;
   
   sum = maxJ + minJ;
   
   cout << "Sum: " << sum << endl;

    return 0;
}
