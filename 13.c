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
    
     for(int i = 0; i < SIZE; i++){
        
        cout << mass[i] << "\t";
        
    }
    
    cout << "---------------------------------------------------" << endl;
    
    int acc = 1;
    
    for(int i = 1; i < SIZE; i= i+2){
        cout << "i: " << i << endl;
        cout << "mass[i]: " << mass[i] << endl;
        acc = acc * mass[i];
        
    }
    
    
    cout << acc;
    

    return 0;
}
