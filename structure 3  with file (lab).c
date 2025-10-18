/*Write a C program where you need to do the followings:
● Define three structures namely Date, Book, Student with necessary member
variables.
Member variables of the three structures are shown in the following table:
Structure Members
Date day, month
Book Book Name, Issuing Date, Return

Date
(Issuing date and Return date are two
instances of Date structure.)
Student ID, Name, Issued Book 1, Issued

Book 2
(Issued Books are two instances of
the Book structure)
● Create one instance of “Student” in the main() function.
● Take user input for all member variables of the student from the main() function.
● Calculate the total fine if that student hasn’t returned the books within the due
date. (Each book has to be returned within 5 days of being issued. Otherwise
the student has to pay a fine for each passing day and the fine rate is Tk 50 per
day for each book. )
Explanation: [You may consider that each month has 30 days for ease of
calculation. E.g. If the issuing date is 5/10 and the return date is 15/11 then the
day difference may be considered as 40 days and the fine will be calculated for
35 days].
● Finally, print the total fine of that student. */
#include<stdio.h>
 struct date
       {
           int day;
           int month;
       };

 struct book
   {
       char bname[30];
       struct date issued_date;
       struct date return_date;
   };
struct student
 {
   int id;
   char name[30];
  struct book issued_book[2];

  };

int main()
{
    FILE*lib;
    lib=fopen("gay.txt","w");
    if(lib==NULL)
    {
        printf("Not found");
    }
    else
        {
          struct student st;

    int i,j;
          printf("Enter id : ");
          scanf("%d",&st.id);
          printf("Enter student name : ");
          scanf("%s",st.name);
          for(i=0;i<2;i++)
          {

              printf("Enter details for Book %d:\n",i+1);
              printf("Enter %d no. issued book name : ",i+1);
              scanf("%s",st.issued_book[i].bname);
              printf("issuing date:");
              scanf("%d %d",&st.issued_book[i].issued_date.day,&st.issued_book[i].issued_date.month);
              printf("return date:");
              scanf("%d %d",&st.issued_book[i].return_date.day,&st.issued_book[i].return_date.month);


          }
          fprintf(lib,"Student Info:\n");
          fprintf(lib,"ID: %d\n",st.id);
          fprintf(lib,"Name: \n");
          fprintf(lib,"%s",st.name);
          int diff[2],cost[2];
          for(i=0;i<2;i++)
          {
            fprintf(lib,"Book %d:%s\n",i+1,st.issued_book[i].bname);
            fprintf(lib,"Issued on:%d/%d\n",st.issued_book[i].issued_date.day,st.issued_book[i].issued_date.month);

         diff[i]=30*(st.issued_book[i].return_date.month-st.issued_book[i].issued_date.month)+st.issued_book[i].return_date.day-st.issued_book[i].issued_date.day;
         if(diff[i]>5)
          {
              if(diff[i]>40)
              {
                  cost[i]=35*50;
              }
              else
                {
                cost[i]=diff[i]*50;
                }

          }
          else
          {
              cost[i]=0;
          }
        printf("\nFine of %d no. issued book : %d",i,cost[i]);
        fprintf(lib,"\nFine of %d no. issued book : %d",i+1,cost[i]);
          }

          printf("\nthe total fine of that student:%d",cost[0]+cost[1]);
          fprintf(lib,"\nthe total fine of that student:%d",cost[0]+cost[1]);

          fclose(lib);
        }
}
