#include <iostream>

using namespace std;

struct Vector {
    double x;
    double y;
};

Vector sum(Vector a, Vector b) {
    Vector result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

Vector raz(Vector a, Vector b){
    Vector result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    return result; 
}

Vector sum(Vector a, double b){
    Vector result;
    result.x = a.x + b;
    result.y = a.y + b; 
    return result;
}

Vector umn(Vector a, double b){
    Vector result;
    result.x = a.x * b;
    result.y = a.y * b;
    return result;
}

Vector umnV(Vector a, Vector b){
    Vector result; 
    result.x = a.x * b.x;
    result.y = a.y * b.y;
    return result;
}

double umnVsum(Vector a, Vector b){
    double result;
    result = (a.x * b.x) + (a.y * b.y);
    return result;
}

Vector midNum(Vector a, Vector b){
    Vector result;
    result.x = (a.x + b.x) / 2;
    result.y = (a.y + b.y) / 2;
    return result;
    
    
}


int main()
{
    Vector a;
    Vector b;
    Vector c;




    return 0;
}

//доделать!
