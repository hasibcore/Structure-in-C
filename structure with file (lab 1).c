/*
Write a C program where you will write two structures : Student and Teacher.
A Student structure will have the members roll and marks.
A Teacher structure will have the members id,name and studentList (array of structures of
size 5);
Create two teacher instances. Then insert the information about the teachers (id, name ,
studentInfo). Then you will have to insert the information about the students who are under
those teachers (use for loop). Finally print the values of members of the two teacher structures.
Sample Input:
Enter teacher 1’ name: Afrin
Enter teacher 1’s id: 100
Enter teacher 1’s student info :
1 10
2 20
3 30
4 40
5 50
Enter teacher 2’ name: Jarin
Enter teacher 2’s id:200
Enter teacher 2’s student info :
100 11
200 21
300 31
400 41
500 51
Sample Output:
Teacher id: 100
Teacher name: Afrin
The students of teacher Afrin are:
(1,10) (2,20) (3,30) (4,40) (5,50)
***************************
Teacher id: 200
Teacher name: Jarin
The students of teacher Jarin are:
(100,11) (200,21) (300,31) (400,41) (500,51)
***************************
*/
// take input from console
#include<stdio.h>
struct teacher
{
 char name[30];
 int id;
 struct student
 {
     int roll;
     float marks;
 }l[5];
};

int main()
{
   FILE *exam;
   exam=fopen("pookie.txt","w");
   if(exam==NULL)
   {
       printf("Not found");
   }
   else
   {
       struct teacher t[2];
       for(int i=0;i<2;i++)
       {
        printf("\nEnter teacher %d’ name: ",i+1);

        scanf("%s",t[i].name);
        printf("Enter teacher %d’s id:\n",i+1);
        scanf("%d",&t[i].id);
        printf("Enter teacher %d’s student info :\n",i+1);
        for(int j=0;j<5;j++)
        {
            scanf("%d %f",&t[i].l[j].roll,&t[i].l[j].marks);
        }

       }
       for(int i=0;i<2;i++)
       {
           fprintf(exam,"\nTeacher id :%d\n",t[i].id);
           fprintf(exam,"Teacher name: %s\n",t[i].name);
           fprintf(exam,"The students of teacher %s are :\n",t[i].name);
           for(int j=0;j<5;j++)
           {
               fprintf(exam,"(%d,%f) ",t[i].l[j].roll,t[i].l[j].marks);
           }
       }
       fclose(exam);
   }

}

//take input from file

#include<stdio.h>
struct teacher
{
int id;
char name[30];
struct student
{
    int roll;
    float marks;
}l[5];

};
int main()
{
    struct teacher t[2];
    FILE*exam;
    exam=fopen("aust.txt","r");
    if(exam==NULL)
    {
        printf("Not found");
    }
    else
    {
        for(int i=0;i<2;i++)
        {

            fscanf(exam,"%s",t[i].name);

            fscanf(exam,"%d",&t[i].id);

            for(int j=0;j<5;j++)
            {
             fscanf(exam,"%d %f",&t[i].l[j].roll,&t[i].l[j].marks);
            }

        }
        for(int i=0;i<2;i++)
        {
            printf("\nTeacher id: %d\n",t[i].id);
        printf("Teacher name:%s\n",t[i].name);
        printf("The students of teacher %s are:\n",t[i].name);
        for(int j=0;j<5;j++)
        {
            printf("(%d,%f) ",t[i].l[j].roll,t[i].l[j].marks);
        }

    }

        fclose(exam);

}
}
