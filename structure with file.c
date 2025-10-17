//Output shows on file
#include<stdio.h>
struct student
{
char name[30];
int roll;
float marks[3];
};
int main()
{
FILE*exam;
exam=fopen("abc.txt","r");
if(exam==NULL)
{
    printf("not exist");
}
else
{
    for(int i=0;i<5;i++)
    {
        struct student sti;
        printf("Enter name of student no.%d : ",i+1);
        getchar();
        gets(sti.name);
        printf("\nEnter Roll of student no.%d : ",i+1);
        scanf("%d",&sti.roll);
                printf("Enter the marks of 3 subjects of student no.%d : ",i+1);
        for(int j=0;j<3;j++)
            {
             scanf("%f",&sti.marks[j]);
            }
        fputs(sti.name,exam);
        fprintf(exam," ");
        fprintf(exam,"%d",sti.roll);
        fprintf(exam," ");
        for(int j=0;j<3;j++)
        {
            fprintf(exam,"%f",sti.marks[j]);
            fprintf(exam," ");

        }
        fprintf(exam,"\n");
    }
    fclose(exam);
}
}
