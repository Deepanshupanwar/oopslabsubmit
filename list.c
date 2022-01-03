#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
void push(struct node **head,int val)
{
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=val;
  newnode->next=NULL;
  if((*head)==NULL)
  {
    *head=newnode;
  }
  else
  { 
    struct node *last=NULL;
    last=*head;
    while(last->next!=NULL)
       last=last->next;
   last->next=newnode;
  }
   
} 
struct node* insert(struct node *obj,int key,int f)
{
 if(obj==NULL)
 {
   printf("key not found\n");
 }
 else if(obj->data==key)
 {
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
  printf("\nenter data to insert\n");
  int val;
  scanf("%d",&val);
  newnode->data=val;
  newnode->next=NULL;
   if(f==1)
   {  
     newnode->next=obj;
     obj=newnode;
   }
   else
   { 
    newnode->next=obj->next;
    obj->next=newnode;
   }
 }
 else
  { 
    obj->next=insert(obj->next,key,f);
   }
return obj;
}
void display(struct node *head)
{
  while(head!=NULL)
  {  
    printf("%d  ",head->data);
    head=head->next;
  }
}
int main()
{
 struct node *head=NULL;
  push(&head,12);
  push(&head,11);
  push(&head,15);
  push(&head,16);
  push(&head,13);
  push(&head,10);
  display(head);
  insert(head,15,1);
  display(head);
}









