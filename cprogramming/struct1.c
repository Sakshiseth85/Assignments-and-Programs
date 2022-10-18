#include<stdio.h>
struct  point
{
    int x,y;
};
int main(){
 struct point p1={1,2};

//1
 struct point *p2=&p1;//p2 is pointer to structure p1
printf("%d %d\n",p2->x,p2->y);//Acessing structure member using structure pointer


//2
struct point arr[3];
arr[0].x=10;
arr[0].y=20;
printf("%d %d\n",arr[0].x,arr[0].y);

struct point p3={.y=40,.x=30};
printf("%d %d",p3.x,p3.y);
return 0;
}