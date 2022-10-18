#include<stdio.h>
#include<stdlib.h>
struct  node
{
    int data;
    struct  node *link;   
};

//Delete from begin
struct node* delete_begin(struct node *head){
    if (head==NULL)
     printf("list is empty");
    else {
        struct node *temp=head;
        head=head->link;
        free(temp);
    }
    return head;
}

//Delete from last node
struct node* delete_last(struct node *head){
    if(head==NULL)
    printf("list is empty");
    else if(head->link==NULL)
    {
        free(head);
        head=NULL;    
     }
    else {
        struct node *temp =head;
        while(temp->link->link!=NULL){
            temp=temp->link;

        }  
        free(temp->link);
        temp->link=NULL;
        // temp=NULL;
    }
    return head;

}

//Insert at given position
void add_at_pos(struct node* head,int data,int pos){
  struct node *ptr=head;
  struct node *temp=malloc(sizeof(struct node));
  temp ->data=data;
  temp->link=NULL;
  pos--;
  while(pos!=1){
    ptr=ptr->link;
    pos--;
  }
  temp->link=ptr->link;
  ptr->link=temp;
}

//Delete at given position
struct node* deleteAtIndex(struct node * head, int index){
    struct node *p = head;
    struct node *q = head->link;
    for (int i = 0; i < index-1; i++)
    {
        p = p->link;
        q = q->link;
    }
    
    p->link = q->link;
    free(q);
    return head;
}
//Insert at start 
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
//    delete_last(head);
// head=delete_begin(head);
head=deleteAtIndex(head,2);
add_at_pos(head,500,2);
     display(head);

    
}