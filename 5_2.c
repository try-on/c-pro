#include <iostream>

using namespace std;


struct Worker {
    string name;
    int money = 0;
    
void getSalary(){
    
    int salary;
    cin >> salary;
    money += salary;
}

void read(){
    cin >> name >> money;
    
}

void write (){
    
    cout << "name: " << name << "; money: " << money << "\n";
    
    
}

};


int main()
{
  
worker first, second;
first.read();
first.write();
    return 0;
}
//видимо они поменяли условие задачи во время решения и что-то там не так 
