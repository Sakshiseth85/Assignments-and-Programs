#include<stdio.h>
#include<stdlib.h>
struct  node{
    struct node *prev;
    int data;
    struct node *next;
};

//To display the list
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d", head->data);
        head = head->next;
    }
    printf("\n");
}
//Make the doubly list
struct node* addToEmpty(struct node* head, int data){
struct node *temp=malloc(sizeof(struct node));
temp->prev=NULL;
temp->data=data;
temp->next=NULL;
head=temp;
return head;
} 

//Insert at beginning
struct node* InsertAtBeginning(struct node* head,int data){
struct node *temp=malloc(sizeof(struct node));
temp->prev=NULL;
temp->data=data;
temp->next=head;
head->prev=temp;
head=temp;
return head;
}

//Insert at end
struct node* InsertAtEnd(struct node* head, int data){
    struct node *temp=malloc(sizeof(struct node));
       struct node *ptr=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    ptr=head;
    while (ptr->next!=NULL)
    {
       ptr=ptr->next;
    }
    ptr->next=temp;
        temp->prev=ptr;
        return head;
    
}

//Insert at given position
struct node* InsertAtPos(struct node* head, int data,int pos){
    struct node *temp=NULL;
    struct node *new=malloc(sizeof(struct node));
    new->prev=NULL;new->data=data;new->next=NULL;
    struct node *temp2;
    temp=head;
    for (int i = 1; i <pos-1; i++)
    {
    temp=temp->next;
    }
    temp2=temp->next;
    temp->next=new;
    temp2->prev=new;
    new->next=temp2;
    new->prev=temp;
    return head;
    
}
//Delete from any postion

//Delete from Beginning
struct node* DeleteFromBeginning(struct node* head){
     head=head->next;
     free(head->prev);
     head->prev=NULL;
     return head;
}


//Delete from end
struct node* DeleteFromEnd(struct node* head){
    struct node *temp=head;
    struct node *temp2;
    while (temp->next!=NULL)
    {
       temp=temp->next;
    }
     temp2=temp->prev;
     temp2->next=NULL;
     free(temp);
     return head;
    
}

//Reverse a linked list
struct node* Reverse(struct node* head){
    struct node *temp=NULL, *temp2=NULL;
    while (head!=NULL)
    {
        temp2=head->next;
        head->next=temp;
        temp=head;
        head=temp2;

    }
    head=temp;
    return head;
    
}
int main()
{
struct node *head=NULL;
head=addToEmpty(head,50);
head=InsertAtBeginning(head,40);
head=InsertAtBeginning(head,60);
head=InsertAtBeginning(head,70);//Adding from start
head=InsertAtEnd(head,80);// Adding from last
head=InsertAtPos(head,10,3);
display(head);
head=Reverse(head);
display(head);
// head=DeleteFromBeginning(head);
// head=DeleteFromEnd(head);

return 0;
}