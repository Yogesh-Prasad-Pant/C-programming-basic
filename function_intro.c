//function is a block of code or set of statement which perform a pertiuclar task which can be called when ever needed
//types of function
//user defined :: those function which are created by the program to perform specific task
//library function (built-in function): Those function which are already defined or created in libray is called built in function 
//Example of library function : printf(),scanf(),getch(),putchar(),pow()
//keyword : keyword is reserved word which specificess specific meaning
//HOw to create function 
//function declarration (prototype) (always done in global section befor main program )
// How to declare function 
//return_type function_name(data_type parmeter 1,data_type parameter2-------data type argument n);
//function call
// syntax : function name (argument1,argument2,argument3);
//function defination same as function declaration but have body  group of statement which perform a perticular task.
// syntax : return_type function_name(data_type1 parameter1,data_type2 parameter2, ----------datat_typen parametern){
//statements of function 
// }

#include<stdio.h>
#include<conio.h>
void add(int a, int b);
void subtraction(int x, int y);
void  multiplication(int p, int q){
    printf("\nmultiplication of %d and %d is %d",p,q,(p*q));
}
float division(int a, int b){
    if(b==0){
    printf("Division by 0 is not possible \n");
    return 0;
    }
    else{
    return (a/b);}
}
 int main(){
    int a,b;
    printf("Enter any two number to perform the basic mathematical problem : ");
    scanf("%d%d",&a,&b);
    add(a,b);
    subtraction(a,b);
    multiplication(a,b);
    printf("Division of %d and %d is %f",a,b,division(a,b));
    return 0;
}
void add(int a, int b){
    printf("\nsum of %d and %d is %d  ",a,b,(a+b));
}
void subtraction(int x, int y){
    printf("\n subtraction of %d and %d is %d",x,y,(x-y) );
}