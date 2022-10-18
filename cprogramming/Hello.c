#include<stdio.h>
// // int main()
// // {
// //     // Pattern--------------------------------1
// //     // for(int i=0;i<4;i++){
// //     //     for(int j=0;j<4;j++){
// //     //         if(j<i)
// //     //         printf(" ");
// //     //         else
// //     //         printf("*");
// //     //     }
// //     //     printf("\n");
// //     // }

// //     //Decimal to Binary------------------------2
// //     int a[10],num,i,j;
// //     printf("\n Enter " );
// //     scanf("%d", &num);
// //     for(i=0;num>0;i++){
// //         a[i]=num%2;
// //         num=num/2;
// //     }
// //     printf("\n Binary is = ");
// //     for(j=i-1;j>=0;j--){
// //        printf("%d",a[j]);
// //     }


// // return 0;

// // }




//Fibonacci Series 0 1 1 2 3 5 8 13....
    // int n=8,a=0,b=1;
    // printf("%d\n",a);printf("%d\n",b);
    // int sum=0;
    // for(int i=0;i<n-2;i++){
    //     sum=a+b;
    //     printf("%d\n",sum);
    //     a=b;
    //     b=sum;
    // }


 //Reverse a numer 1234
    //   int n=1234,rev=0;
    //   while (n!=0)
    //   {
    //     /* code */
    //     rev=rev*10+n%10;
    //     n=n/10;
    //   }
    //      printf("%d",rev);


#define MAX_SIZE 100      // Defines maximum size of array



int main()
{
    int arr[MAX_SIZE];
    int size, i;



   /* Input size of array */
    printf("Enter size of the array: ");
    scanf("%d", &size);



   /* Input array elements */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }



   /*
     * Print array in reversed order
     */
    printf("\nArray in reverse order: ");
    for(i = size-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }



   return 0;
}