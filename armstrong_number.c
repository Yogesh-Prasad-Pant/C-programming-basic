//checking the armstrong nuber 
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,digit,p;
    printf("Enter any integer number for finding sum of it's digit : ");
    scanf("%d",&n);
    p=n;
    while(n!=0){
        digit = n%10;
        sum += digit*digit*digit;
        n = n/10;
    }
    if(sum == p)
    printf("%d is armstrong number ",p);
    else
    printf("%d is not an armstrong number ",p);
    getch();
}