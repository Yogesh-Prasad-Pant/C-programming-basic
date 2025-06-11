// pointer to structure variable
#include<stdio.h>
struct student{
    int roll_no;
    float marks;
    char name[50];
};
int main(){
    struct student s1,*sptr;
    sptr = &s1;
    printf("Enter the student's name roll no and marks : ");
    scanf("%[^\n]%d%f",sptr->name,&sptr->roll_no,&sptr->marks);
    printf("The entered information by using pointer is Name : %s  Roll No : %d  Marks : %f",sptr->name,sptr->roll_no,sptr->marks);
    printf("\n The entered information by using structure variable is Name : %s  Roll No : %d  Marks : %f",s1.name,s1.roll_no,s1.marks);
    return 0;
}
