#include<stdio.h>
union unionJob
{
   char name[32];
   int salary;
   int workerNo;
}uJob;

struct structJob
{
   char name[32];
   int salary;
   int workerNo;
}sJob;

int main(){
printf("Size of union is %d\n",sizeof(uJob));
printf("Size of struct is %d\n\n",sizeof(sJob));

uJob.salary=20000;
sJob.salary=40000;
sJob.workerNo=8;
printf("Salary in union is %d\n",uJob.salary);
uJob.workerNo=5;
printf("worker no in union is %d\n",uJob.workerNo);
printf("Updated salary in union %d\n\n",uJob.salary);
printf("Salary in struct is %d\n",sJob.salary);
printf("worker no in struct is %d\n",sJob.workerNo);
printf("Updated salary in struct %d",sJob.salary);
return 0;
}

