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
struct StudentDB *ptr;
int sum=0;
int temp;
int t;
for(int i=0;i<5;i++)
{
std[i].sno=i+1;
printf("Enter the Details of Student %d : \n",std[i].sno);
for(int j=0;j<5;j++)
{
printf("Subject %d : ",j+1);
scanf("%d",&std[i].marks[j]);
}
printf("\n");
for(int j=0;j<5;j++)
{
sum = sum + std[i].marks[j];
}
std[i].total = sum;
sum=0;
}
for(int i=0;i<5;i++)
{
for(int j=i+1;j<5;j++)
{
if(std[i].total<std[j].total)
{
temp=std[i].total;
t=std[i].sno;
std[i].total=std[j].total;
std[i].sno = std[j].sno;
std[j].total=temp;
std[j].sno=t;
}
}
}
printf("After sorting the students are : \n");
for(int i=0;i<5;i++)
{
printf("Student %d : %d\n",std[i].sno,std[i].total);
}
}
