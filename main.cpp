#include <iostream>
#include "functions.h"
#include"factorial.cpp"
#include"hello.cpp"
#include"gcd.cpp"
using namespace std;
int main(){
    print_hello();
    cout<<endl;
    cout<<"The factorial of 5 is"<<factorial(-5)<<endl;
    int x = 56,y=98;
    cout<<"GCD of 56 and 98 iteratively is"<<gcd(56,98)<<"\n";
    cout<<"GCD of 56 and 98 recursively is "<<gcdRec(56,98)<<"\n";
    return 0;
}
