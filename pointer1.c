// Pointer is a variable which stores the addres of another variable

// syntax of pointer
// data_type_of_pointer* name_of_poiter_variable;
// int* p; float* q;
//int a=5; float b = 4.7;
//assigning addres of any varible to the pointer
// pointer_variable_name = &Variable_name;
// example p = &a; q = &b;

// Types of pointer in c program
// void pointer : The type of pointer which points not of any type but can be converted into any type of pointer varible 
//by type_casting it.
// for eg  we have p void pointer 
// we convet it into either float or in integer
// new_pointer_varible = int* p;

// bad pointer: the pointer which donot have any addres of a another variable but decleared as a pointer.
// for eg int *p ;
// here p is bad pointe untill it is initilized.
// p = &a;
// now it is not a bad 

// Null pointer: the ponter which points to nothing or null is called the null pointer;

// & is called the reference operator which gives addres of variable
// * is a dereference varible which is opposite of reference opereator 

#include<stdio.h>
#include<conio.h>
int main(){
    int a=5,*p;
    p = &a;
    printf("The address of a =%d",&a);
    printf("\n The value of a = %d",a);
    printf("\nThe address of p = %d",&p);
    printf("\nThe value of  p = %d",p);
    printf("\nThe value stored in the adddress which is stored in p  = %d\n",*p);
    return 0;
}





