#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node*prev;
};
int main(){
    int count;
    struct Node* head=NULL;
    struct Node* first=NULL;
    struct Node* second=NULL;struct Node* tail;
    struct Node* Pointer=NULL;
    Pointer=(struct Node*)malloc(sizeof(struct Node));
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));
    tail=(struct Node*)malloc(sizeof(struct Node));
    head->data=1;
    first->data=2;
    second->data=3;
    tail->data=4;
    head->next=first;
    first->next=second;
    second->next=tail;
    tail->next=head;
    head->prev=tail;
    first->prev=head;
    second->prev=first;
    tail->prev=second;
    Pointer=head;
    while(Pointer!=tail){
        count++;
        printf("%d",Pointer->data);
        Pointer=Pointer->next;
    }
    printf("%d",Pointer->data);
    return 0;
} 