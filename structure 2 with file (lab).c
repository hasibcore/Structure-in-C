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
   float total[2];
   float average[2];
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
           int sum=0;

           fprintf(exam,"\nTeacher id :%d\n",t[i].id);
           fprintf(exam,"Teacher name: %s\n",t[i].name);
           fprintf(exam,"The students of teacher %s are :\n",t[i].name);


           for(int j=0;j<5;j++)
           {
              sum=sum+t[i].l[j].marks;
           }

           total[i]=sum;
           average[i]=sum/5;
          printf("The students of teacher %s have a total number of %f and an average number of %f.\n",t[i].name,total[i],average[i]);
       }

           if(average[0]>average[1])
       {
           printf("The students of %s have better results.\n",t[0].name);
       }
       else if(average[0]==average[1])
       {
           printf("Both are same result\n");
       }
      else
      {
         printf("The students of %s have better results.\n",t[1].name);
      }



       fclose(exam);
   }

}

