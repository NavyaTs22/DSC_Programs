//We are finding factorial for non negative integers and 0!=1

#include <stdio.h>

// Use long or long long Because Int size can hold only so much of digits before it hits limits 

int fact(int n){
    
    if(n==0){       //Base case important stop recursion 
        return 1;
    } 
   
    
    return n*fact(n-1);     //recursive case calculates and returns our factorial values
    
}



int main() {
    int terms,i;
  printf("enter number:");
  scanf("%d",&terms);
 
 printf("the factorial is %d",fact(terms));
 
  return 0;
}



output :

enter number:6
the factorial is 720
