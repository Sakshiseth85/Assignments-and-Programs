#include<stdio.h>
#include<stdlib.h>
struct  node
{
    int data;
    struct  node *link;   
};

//To insert at end
void InsertAtEnd(struct  node *head, int data){
struct  node *ptr, *temp;
ptr=head;
temp=malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
while ((ptr->link!=NULL))
{
    ptr=ptr->link;
}

ptr->link=temp;
}

//Add at beginneing
struct node* insertAtStart(struct  node *head, int data){
struct node *ptr,*temp;
temp=malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
temp->link=head;
head=temp;
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
    InsertAtEnd(head,14);
    InsertAtEnd(head,20);
    InsertAtEnd(head,22);
    head=insertAtStart(head,80);
    display(head);
    
    // printf("%d\n",head->link->link->link->data);
    
}