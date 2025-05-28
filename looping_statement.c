// Looping statemt are those statement which repeates perticular portion or set of statement of a program for given 
//
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    char op,yes_no;
    do{
    printf("\nEnter an number and the operator and the another nuber to be performe operation(like +,*,-,): ");
    scanf("%d%c%d",&a,&op,&b);
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
        if(b == 0)
        printf("division by zero is not possible.");
        else
        printf("%d / %d = %d ",a,b,(a/b));
        break;
        default:
        printf("you entered rong operator\n");

    }
    printf("\n Do you want to  calulate again press y for yes and n for no: ");
    yes_no = getche();
}while(yes_no!='n');


    return 0;
}