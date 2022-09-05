#include <iostream>
#include "functions.h"
#include"factorial.cpp"
#include"hello.cpp"
using namespace std;
int main(){
    print_hello();
    printf("\n");
    printf("The factorial of 5 is %d",factorial(-5));
    return 0;
}
