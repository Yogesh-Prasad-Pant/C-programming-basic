// Calling function in two ways
// call by value and call by reference
// call by value is the process of calling function in which the value of argument or actual parmeter is not change if the value of formal argument or parmeter  are changed
//but in call by reference if we change variable value in function defination then value of variable in main functio  is also changed.
#include<stdio.h>
#include<conio.h>
// call by value 
void increament(int x){
    x++;
    printf(" \nafter increament value of x in function is %d ",x);
}
//call by reference
void increament_ref(int *y){
    (*y)++;
}
int main(){
    int a,b;
    printf("Enter any two numbers namely a and b : ");
    scanf("%d%d",&a,&b);
    printf("\nValue of a berfor calling the function by value is %d", a);
    increament(a);
    printf("\nvalue of a after calling the function by value is %d",a);
    printf("\n Value of b befor calling the function by reference  is %d",b);
    increament_ref(&b);
    printf(" \nafter calling the function by reference value of b in  main function is %d ",b);
    return 0;
}