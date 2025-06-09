// Structure is a collection of different data types into a single name
// Structure is a user-defined data type which can store multiple data of various data type.
// Structure is a collection of hetrogenious data.
// structure can be decleared in both local and global section.
//syntax of structure.
//struct structure_name{
//data_types data_members;
//}structure_variable;
// 
#include<stdio.h>
struct student{
    char name[50];
    int roll_no;
    float marks;
};
int main(){
    struct student s1,s2;
    printf("\nEnter the name of student : ");
    scanf("%[^\n]",s1.name);
    printf("\nEntere the roll no: ");
    scanf("%d",&s1.roll_no);
    printf("\nEntere the marks : ");
    scanf("%f",&s1.marks);
printf("\n Enter datat of another student");
    printf("\nEnter the name of student : ");
    scanf("%[^\n]",s2.name);
    printf("\nEntere the roll no: ");
    scanf("%d",&s2.roll_no);
    printf("\nEntere the marks : ");
    scanf("%f",&s2.marks);

    printf("\nThe entered data in s1 structure variable is: \n");
    printf("Name: %s",s1.name);
    printf("\nRoll NO : %d",s1.roll_no);
    printf("\nMarks : %.2f",s1.marks);
      printf("\nThe entered data in s2 structure variable is: \n");
    printf("Name: %s",s2.name);
    printf("\nRoll NO : %d",s2.roll_no);
    printf("\nMarks : %.2f",s2.marks);
    return 0;
}