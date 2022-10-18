#include<stdio.h>
struct  address
{
    char city[20];
    int pin;
    char phone[14];
};
struct employee
{
    char name[20];
    struct address add;
    
};
void display(struct employee);
void main(){
    struct employee e1;
    printf("Enter employee information ");
    scanf("%s %s %d",e1.name,e1.add.city,&e1.add.pin);
    display(e1);
}
void display(struct employee e1){
    printf("%s\n%s\n%d\n",e1.name,e1.add.city,e1.add.pin);
}

