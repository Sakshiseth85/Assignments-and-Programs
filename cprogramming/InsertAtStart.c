#include<stdio.h>
#include<stdlib.h>
struct  node
{
    int data;
    struct  node *link;   
};



struct node* insertAtStart(struct  node *head, int data){
struct node *ptr;
ptr=malloc(sizeof(struct node));
ptr->data=data;
ptr->link=NULL;
ptr->link=head;
head=ptr;
return head;
}

//To display the list
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d   ", head->data);
        head = head->link;
    }
    printf("\n");
}


int main(){
    struct  node *head=malloc(sizeof(struct  node));//Allocating memory size to node struct.
    head->data=45;//Give data of first node as value of 45
    head->link=NULL;//Give adress in first node as Null from head pointer

     struct  node *head2=malloc(sizeof(struct node));
    head2->data=50;
    head2->link=NULL;
    head->link=head2;
    head2=malloc(sizeof(struct  node));
    head2->data=3;
    head2->link=NULL;
    head->link->link=head2;

   head= insertAtStart(head,5);
     display(head);
    
}