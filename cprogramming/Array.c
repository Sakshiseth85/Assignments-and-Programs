#include<stdio.h>
int main(){

//1 case
int arr[5]={5,6,10};
arr[3]=arr[1];
printf("%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);


//2 case
int arr1[2];
printf("%d\n",arr1[3]);
printf("%d\n",arr1[-2]);


//3 case
for(int i=0;i<5;i++){
    printf("Address arr[%d] is %d\n ",i,&arr[i]);
}
 



    return 0;
}