#include <stdio.h>
#include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
// };
// struct Node *head=NULL;
// struct Node *last=NULL;
// int getCurrSize(struct Node* node){
//     int size=0;



//    while(node!=NULL){
//         node = node->next;
//         size++;
//     }
//     return size;
// }
// void deleteFirst(struct Node** head){
//     struct Node* temp = *head;
//     if(head == NULL){
//         printf("Linked List Empty, nothing to delete");
//         return;
//     }
//     *head = (*head)->next;
//     free(temp);
// }
// void deleteEnd(struct Node* head){
//     struct Node* temp = head;
//     struct Node* previous;
//     if(head == NULL){
//         printf("Linked List Empty, nothing to delete");
//         return;
//     }
//     if(temp->next == NULL){
//         head = NULL;
//         return;
//     }
//     while (temp->next != NULL)
//     {
//         previous = temp;
//         temp = temp->next;
//     }
//     previous->next = NULL;
//     free(temp);
// }
// void deletePosition(struct Node* head, int n){
//     struct Node* temp = head;
//     struct Node* previous;
//     int size = getCurrSize(head);
//     if(n < 1 || n > size){
//         printf("Enter valid position\n");
//         return;
//     }
//     if(n == 1){
//         head = head->next;
//         free(temp);
//         return;
//     }
//     while (--n)
//     {
//         previous = temp;
//         temp = temp->next;
//     }
//     previous->next = temp->next;
//     free(temp);
// }
// void insertMiddle(int n, int data, struct Node* head)
// {
//     int size = getCurrSize(head);
//     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     if(n < 0 || n > size)
//         printf("Invalid position to insert\n");
//     else if(n == 0){
//         newNode->next = head;
//         head = newNode;
//     }
//     else
//     {
//         struct Node* temp = head;
//         while(--n)
//             temp=temp->next;
//         newNode->next= temp->next;
//         temp->next = newNode;
//     }
// }
// void insertFirst(int data) {
//    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
//    link->data = data;
//    link->next = head;
//    head = link;
// }
// void insertLast(int data)
// {
//     struct Node *node =(struct Node*)malloc(sizeof(struct Node)) ;
//     node->data=data;
//     node->next=NULL;
//     if(head==NULL)
//     {
//         head=node;
//         last=node;
//     }
//     else
//     {
//         last->next=node;
//         last=node;
//     }
// }
// void print(struct Node* head)
// {
//     do{
//         printf("%d->",head->data);
//         head=head->next;
//     }
//     while(head!=NULL);
// }
// int main()
// {
//     insertLast(10);
//     insertFirst(20);
//     insertLast(30);
//     insertLast(1);
//     insertLast(40);
//     insertFirst(56);
//     print(head);
//     printf("\n");
//     printf("Enter element to add along with its position.");
//     int pos,data;
//     scanf("%d %d",&pos,&data);
//     insertMiddle(pos, data, head);
//     print(head);
//     printf("\n");
//     printf("Enter element positon to delete.");
//     scanf("%d",&pos);
//     deletePosition(head,pos);
//     print(head);
//     printf("\n");
//     deleteEnd(head);
//     print(head);
//     printf("\n");
//     deleteFirst(&head);
//     print(head);
//     return 0;
// }

struct  node
{
    int data;
    struct  node *link;    
};
 //To calculate the number of nodes.
void countNodes(struct node *head){
int count=0;
if(head==NULL){
    printf("Linked list is empty");
}
struct  node *ptr=NULL;
ptr=head;
while (ptr!=NULL)
{
    count++; //will count how many nodes its visiting.
    ptr=ptr->link;//will keep changing to 1000, 2000,3000 and final NULL.
}
printf("%d",count);
}




int main(){
    // Head pointer is required to access the first node of list.
  // pointer head will point both data and link of first node structure.

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


    head->link->link=head2;//without taking third pointer we linked the 3rd node

    // printf("%d",head2->data);

printf("%d",countNodes);
    //To calculate the number of nodes.


    
}
