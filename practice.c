#include<stdio.h>
#include<stdlib.h>
struct StudentDB
{
int marks[5];
int sno;
int total;
}std[5];
int main()
{
struct StudentDB *ptr = (struct StudentDB *)malloc(5 * sizeof(struct StudentDB));
int sum=0;
int temp;
int t;
for(int i=0;i<5;i++)
{
(*(ptr+i)).sno=i+1;
printf("Enter the Details of Student %d : \n",(*(ptr+i)).sno);
for(int j=0;j<5;j++)
{
printf("Subject %d : ",j+1);
scanf("%d",&(*(ptr+i)).marks[j]);
}
printf("\n");
for(int j=0;j<5;j++)
{
sum = sum + (*(ptr+i)).marks[j];
}
(*(ptr+i)).total = sum;
sum=0;
}
for(int i=0;i<5;i++)
{
for(int j=i+1;j<5;j++)
{
if((*(ptr+i)).total<(*(ptr+j)).total)
{
temp=(*(ptr+i)).total;
t=(*(ptr+i)).sno;
(*(ptr+i)).total=(*(ptr+j)).total;
(*(ptr+i)).sno = (*(ptr+j)).sno;
(*(ptr+j)).total=temp;
(*(ptr+j)).sno=t;
}
}
}
printf("After sorting the students are : \n");
for(int i=0;i<5;i++)
{
printf("Student %d : %d\n",(*(ptr+i)).sno,(*(ptr+i)).total);
}
free(ptr);
}
