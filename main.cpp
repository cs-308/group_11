#include <iostream>
#include "functions.h"
#include"factorial.cpp"
#include"hello.cpp"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial of 5 is "<< factorial(-5)<< endl;
    return 0;
}
