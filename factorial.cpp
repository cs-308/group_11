#include "functions.h"
#include<iostream>
using namespace std;
int factorial(int n){
    // Checking git diff
    if(n<0) 
    {
    	cout<<"Enter a positive number : ";
    	int temp;
    	cin>>temp;
    	return factorial(temp);
    } 
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
