//control statemets are those statemnt which controls the flow of execution of a program.
//for example branching statements : if, if else , ifelseif,switch 
//Looping statement: which repeates perticular set of statements to be executed until the condition is satisfied.for eg: for,while,do while


#include<stdio.h>
#include<conio.h>
void main(){
    //to compare two nuber from user
    int a,b;
    printf("Enter any two number namely a and b respectively :");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("\n a is greater than b ");
    }else{
        printf("\n b is greater than  a");
    }
    //To check months of a years
    int mon;
    printf("\n Enter a months in number value : ");
    scanf("%d",&mon);
    switch(mon){
        case 1: 
        printf("1 =  january ");
        break;
        case 2: 
        printf("2 = february ");
        break;
         case 3: 
        printf("3 =  march ");
        break;
        case 4: 
        printf("4 = april ");
        break;
         case 5: 
        printf("5 =  May ");
        break;
        case 6: 
        printf("6 = june ");
        break;
         case 7: 
        printf("7 =  july ");
        break;
        case 8: 
        printf("8 = august ");
        break;
         case 9: 
        printf("9 =  september ");
        break;
        case 10: 
        printf("10 = october");
        break;
         case 11: 
        printf("11 =  November ");
        break;
        case 12: 
        printf("12 = December ");
        break;
        default:
        printf("wrong month in numeric value");
    }
    char op,rip;
    level0:
    printf("\nEnter an number  a and enter operator like (+,-,*,/) and finaly input another nuber b:  ");
    scanf("%d%c%d",&a,&op,&b);
    level1:
    printf("\n");
    switch(op){
        case '+':
        printf("%d + %d = %d ",a,b,(a+b));
        break; 
        case '-':
        printf("%d - %d = %d ",a,b,(a-b));
        break;
        case '*':
        printf("%d * %d = %d ",a,b,(a*b));
        break;
        case '/':
        printf("%d / %d = %d ",a,b,(a/b));
        break;
        default:
        printf("you entered rong operator");

    }
    printf("\n Do you want to more calulation on these data press y for yes and n for no and if you want  to enter new data press a :");
    rip = getche();
    if(rip=='y'||rip=='Y'){
        printf("\n Enter new operator(+,-,*,/): ");
       op = getche();
       goto level1;
    }else if(rip =='a'||rip =='A'){
        goto level0;
    }else{
        printf("\n you are out of calculator");
    }
    getch();
}