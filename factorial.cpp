#include "functions.h"
#include<iostream>
using namespace std;
int factorial(int n){
    // Checking git diff
    if(n<0) 
    {
    	return -1;
    } 
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
