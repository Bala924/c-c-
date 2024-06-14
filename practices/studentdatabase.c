#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    char rollnumber[20];
    char name[20];
    int age;
    float marks;
};
void addstudent(struct student *database,int *numstudents)
{
    printf("Enter Roll Number:");
    scanf("%s",&database[*numstudents].rollnumber);
    printf("Enter Name:");
    scanf("%s",&database[*numstudents].name);
    printf("Enter age:");
    scanf("%d",&database[*numstudents].age);
    printf("Enter Marks:");
    scanf("%f",&database[*numstudents].marks);
    (*numstudents)++;
    printf("Students added successfully!\n");
}
void displaystudents(const struct student *database,int numstudents)
{
    printf("student Database:");
    printf("Roll Number \t Name \t\t Age \t Marks \n");
    for(int i=0;i<numstudents;i++)
    {
        printf("%s\t\t%s\t\t%d\t%f\n",database[i].rollnumber,database[i].name,database[i].age,database[i].marks);
    }
}
int main()
{
    const int maxstudents=100;
    struct student studentDB[maxstudents];
    int numstudents=0;
    int choice;
    do
    {
        printf("\n student Database management system\n");
        printf("1.Add student details\n");
        printf("2.Display student details\n");
        printf("3.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                addstudent(studentDB,&numstudents);
                break;
            case 2:
                displaystudents(studentDB,numstudents);
                break;
            case 3:
                printf("Exit the program");
                break;
            default:
                printf("invalid choice please enter a valid number");

        }
    }
    while(choice!=3);
    return 0;
}
