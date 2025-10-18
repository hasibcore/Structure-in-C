#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct date dt[2];
    int i;
    FILE* bal;
    bal=fopen("parhtogay.txt","w");
    if(bal==NULL)
    {
     printf("Not found");
    }
    for(i=0;i<2;i++)
    {
      fscanf(bal,"%d %d %d",dt[i].day,dt[i].month,dt[i].year);

    }
   if(dt[0].year<dt[1].year)
   {
       printf("Date %d is earlier than Date %d",2,1);
   }
    else if(dt[0].year==dt[1].year)
    {
        if(dt[0].month<dt[1].month)
        {
             printf("Date %d is earlier than Date %d",2,1);
        }
        else if(dt[0].month==dt[1].month)
        {
            if(dt[0].day<dt[1].day)
            {
                 printf("Date %d is earlier than Date %d",2,1);
            }
            else if(dt[0].day==dt[1].day)
            {
                printf("Date %d is same Date %d",1,2);
            }
            else
                {
          printf("Date %d is earlier than Date %d",1,2);
                }
        }
        else
            {
                printf("Date %d is earlier than Date %d",1,2);
            }
    }
    else
        {
           printf("Date %d is earlier than Date %d",1,2);
        }
    fclose(bal);
}
