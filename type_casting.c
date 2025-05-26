//Type casting is the process of converting one data type value into another data type value
//Types of type casting are two they are 
// 1.> Implicite type casting :
//                         The type of casting in which compiler automatically converts lower data type into lower data type 
//                         for eg inter data type into float data type
// 2.>Explicite type casting : 
//                         The type of casting in which higher data type value is converted into lower data type.
//                         for example float to integer data type
// loss of dat in explicite
#include<stdio.h>
#include<conio.h>
void main(){
    int a = 5,b;
    float d = 4.5,e;
    char A = 'A';
    // implicite data type casting
e = a;
//explicite data type casting
b = (int) d;
A =  a;
printf("value of a  = %d and vaue of b is %d and value of e = %f and value of A = %c ",a,b,e,A);
    
    getch();
}