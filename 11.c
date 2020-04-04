#include <iostream>


using namespace std;
int main()
{
    
    srand(time(NULL));
    
    
    const int SIZE =10;
    
    int mass[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        
        mass[i] = rand() %5 - 3;
        
        
    }
    
    for(int i = 0; i < SIZE; i++){
        
        cout << mass[i] << "\t";
        
    }
    
    int acc = 0; 
    cout << "-------------------------------------------" << endl;
     for(int i = 0; i < SIZE; i++){
        
        //cout <<"до иф мы это вывели mass[i]: " <<  mass[i] << endl;
        
        if(mass[i] < 0){
            
            //cout <<"внутри иф mass[i]: " << mass[i] << endl;
            
           // cout << "acc до операции: "<< acc << endl;
            
            acc= acc + mass[i];
            
           // cout << "acc после хирургического вмешательства: "<< acc << endl;
        }
        
        
        
    }
    
    cout << acc;
    
    return 0;
}
