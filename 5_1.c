#include <stdio.h>

using namespace std;


struct Student {
    string name;
    string surName;
    double mark;

};

void printStudent(Student student){
    
    cout << student.name << " " << students[maxIndex].surName;
   
    
}

int main()
{
  
  
  int n;
  cin >> n;
  Student students[n];
  for(int i = 0; i < n; i++){
      
      cin >> students [i].name;
       cin >> students [i].surName;
        cin >> students [i].mark;
      
  }
  
  string command;
  cin >> command;
  if(n == 0){
      
      cout << -1;
      return 0;
      
  }
  if(command == "max"){
      
      int maxIndex = 0;
      for(int i = 0; i < n; ++i){
          
          if (students[i.mark > students[maxIndex].mark)
          
      }
      
  }
  
printStudent(students[maxIndex]);
   
   else if (command == "avg"){
       
       double sum = 0;
       for(int i = 0; i < n; ++i){
           
           sum += students[i].mark;
           
       }
       double average = sum / n;
       for(int i = 0; i < n; i++){
           
           if (students[i].mark; )
       }
       double average = sum / n;
       bool isFound = false;
       for (int i = 0; i < n; i++){
           
           if (students[i].mark. > average){
               
               isFound = true;
               printStudent(students[i]); 
               
               
           }
           
           
           
       }
       if(!isFound){
           
           cout << "-1";
       }
       else {
           bool isFound = false;
           sring name;
           cin >> name;
           for (int i = 0; i < n; i++){
               
               if(students[i].name == name){
                   
                   isFound = true;
                   printStudent(students[i]);
                   
               }
               
               
           
           
           
           
       }
   }

    return 0;
}
//не дописано
