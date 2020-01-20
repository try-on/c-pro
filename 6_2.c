/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main()
{
 
set <string> friends;
char com;
string name;
int n;
cin >> n;
for(int i = 0; i < n; i++){
    cin >> com >> name;
    if(com == '+'){
        friends.insert(name);
    } 
      else if(com == '-'){
          
          friends.erase(name);
      }
          
    
    else if(com == '*'){
        if(friends.count(name) == 0){
            
            cout << "No";
        }
    } else{
        cout << "Yes";
    }
}
    
  
}
