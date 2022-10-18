#include<stdio.h>
#define Area
#define Sum
#define PI 3.14
#define MIN(a,b) ((a)<(b)?(a):(b))

#if !defined(Area)&& !defined(Sum)
#warning No macros defined
#endif

//Use of static 
int fil(){
    static int count=0;
    count++;
    return count;
}
int main(){

#ifdef Area
printf("Area\n");
#endif


#ifdef Sum
printf("Sum\n");
#endif

printf("%f\n",PI);
printf("Minimum btw 10 and 20 is : %d\n",MIN(10,20));

printf("count is %d\n",fil());
printf("count is %d",fil());
}