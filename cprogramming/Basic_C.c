#include<stdio.h>
//Recursion
int sum(int n) {
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1); 
    else
        return n;
}

//Call by reference
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Values before swap: x = %d, y = %d\n", *x,*y);
}
int main() {
    int number, result;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    result = sum(number);
    printf("sum = %d\n", result);

    int x = 10;
    int y = 11;
    printf("Values before swap: x = %d, y = %d\n", x,y);
    swap(&x,&y);
    printf("Values after swap: x = %d, y = %d", x,y);

    //gfets() and puts()
    //  char name[30];
    // printf("Enter name: ");
    // fgets(name, sizeof(name), stdin);  // read string
    // printf("Name: ");
    // puts(name);    // display string
    return 0;
    return 0;
}

