// Calculating fibonacci Series from 0 for any desired number 

#include <stdio.h>

int fib(int n){
    
    if(n==0){                // Base case Actually puts end to recursive Function 
        return 0;
    }
    if(n==1){
        return 1;
    }
    
    return fib(n-1)+fib(n-2);   // Recursive case uses recursion and gives the series number of that iteration 
    
}



int main() {
    int terms,i;
  printf("enter number:");
  scanf("%d",&terms);
 
 printf("the series is");
 for(i=0;i<=terms;i++)
{
    printf("%d",fib(i));
}
  
  return 0;
}

OUTPUT : 
enter number:4
the series is 01123
