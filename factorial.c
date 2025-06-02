//When amy function calls it self then it is called the recursive function
//why use the recrusive function
//for solving  problems which contains iterative steps
//To calcualte factorial
//Logic  n! = n*(n-1)*(n-2)*(n-3) .............3*2*1
#include<stdio.h>
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int a ;
    printf("please enter any number to find it's factorial : ");
    scanf("%d",&a);
    printf("Factorial of %d is %d",a,factorial(a));
    return 0;
}