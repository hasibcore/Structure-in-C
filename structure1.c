#include<stdio.h>
#include<string.h>
struct person
{
 char name[28];
 int age;
 float sal;
 //int month[12];
};
int main()
{
    //int person1,person2,person3;
   struct person person1,person2,person3;
   printf("Enter Name 1st person:");
  fflush(stdin);
   gets(person1.name);

   printf("Insert the age :");
   scanf("%d",&person1.age);
printf("Enter the sallery");
   scanf("%f",&person1.sal);


   printf("Enter Name :");
   gets(person2.name);

   printf("Insert the age :\n");
   scanf("%d",&person2.age);
printf("Enter the sallery\n");
   scanf("%f",&person2.sal);


   printf("Enter Name 3rd person:");
   gets(person3.name);

   printf("Insert the age :");
   scanf("%d",&person3.age);
printf("Enter the sallery");
   scanf("%f",&person3.sal);


 printf("1st person Name :");
   puts(person1.name);
   printf("age :%d",person1.age);
     printf("sallery :%f \n",person1.sal);
   printf("\n 2nd person Name :");
   puts(person2.name);
   printf("age :%d",person2.age);
     printf("sallery :%f \n",person2.sal);
   printf("\n 3rd person Name :");
   puts(person3.name);
   printf("age :%d",person3.age);
     printf("sallery :%f \n",person3.sal);

}

