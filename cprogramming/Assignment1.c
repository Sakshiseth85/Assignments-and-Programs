#include<stdio.h>
#include<stdlib.h>
// #include<avr/io.h> // for registers 
// #include<util/delay.h>// for registers

// int main(){
// //Q1
// // int a=2;
// // a=a*3<<2*2/2;
// // printf("%d",a);

// //Q2
// // int a=10;
// // a=a>>2%2*3;
// // printf("%d",a);
// }

// #define IMG 10
// int main()
// {
// #ifdef IMG
// #define void fun()\
// {\
// printf("I am a Programmer");
// }
// return 0;
// }

// #define A 10
// int main()
// {
// #ifdef IMG
// #define void fun()\
// {\
// printf("I am a Programmer");
// }
// return 0;
// }

// int main(){

//     DDRB = 0xff;  
//     return 0;
// }

// int main(){
//     int a=10,b=10,*p=&a,**p2=&p;
//     printf("%d",**p2);

//     return 0;
// }

//Q3
int main()    
{    
    //Initialize array     
    // int arr[] = {2,3,6,1,5};     
    int n;   
    printf("Enter Size");   
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    //To Calculate length of array arr    
    // int length_of_arr = sizeof(arr)/sizeof(arr[0]);    
    // printf("Length of array is %d\n",length_of_arr);    
    printf("Original array: ");    
    for (int i = 0; i < n; i++) {     
        printf("%d", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Reverse order of array: ");    
    //Loop through the array in reverse order    
    for (int i = n-1; i >= 0; i--) {     
        printf("%d", arr[i]);     
    }     
    return 0;    
}    

//Q3
// int main(){
//      int a[10],num,i,j;
//     printf("\n Enter " );
//     scanf("%d", &num);
//     for (i=0;num>0;i++){
//         a[i]=num%2;
//         num=num/2;
//     }
//     printf("\n Binary is = ");
//     for(j=i-1;j>=0;j--){
//        printf("%d",a[j]);
//     }
//     return 0;
// }

//Q6
// int main(){
//    int n=6; 
//     for (int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
