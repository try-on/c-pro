#include <iostream>


using namespace std;
int main()
{
    
    int count = 0;
    
    srand(time(NULL));
    
     int SIZE = 10;
    
    
    int mass[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        
        mass[i] = rand()%10;
        
    }
    
    for(int i = 0; i < SIZE; i++){
        
        cout << mass[i] << "\t";
        
    }
    
    cout << endl << "-------------------------------------------------------------------------" << endl;

    for(int i = 0; i < SIZE; i++){
        
        
         for(int j = 0; j < SIZE; j++){
             
             if(mass[i] == mass[j] && i != j){
                 
                 for(int k = j + 1; k < SIZE; k++){
                     
                     mass[k - 1] = mass[k];
                     
                     
                     
                     
                 }
                 
                 SIZE--;
                
             }
             
             
             
         }
         
     
    }
    
    cout << endl << "-------------------------------------------------------------------------" << endl;

    for(int i = 0; i < SIZE; i++){
        
        cout << mass[i] << "\t";
        
    }
    
   
   
    return 0;
}
