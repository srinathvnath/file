#include<stdio.h>
int sum=0;
int i,j;
struct student 
{
  //int rollno;
  //char name[20];
  double total;
  //int age;
};

int main()
{
 struct student sarr[10];
 for(i=0;i<10;i++)
   sarr[i].total=rand()%100;  //scanf("%d",&sarr[i].total);
 for(j=0;j<10;j++)
   sum+=sarr[j].total;
  return 0;
}
