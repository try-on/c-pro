#include <iostream>
#include <vector>

using namespace std;



int main()
{

int array[10];
int n;
cin >> n;
vector<int> myVector(n, n); //так же изучить list, forward_list
myVector.push_back(10);
myVector.pop_back();
myVector.clear();
for (int i = 0; i < myVector.size(); i++){
    
    cout myVector[i] << " ";
    
}


    return 0;
}

