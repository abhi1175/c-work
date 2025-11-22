#include<stdio.h>
#include<stlib.h>

struct Node{
int data;
structNode*next;
};

int main()
{
printf("program start\n");
struct Node*head=NULL;
struct Node*second=NULL;
struct Node*Third=NULL;
struct Node*Fourth=NULL;

head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
Third=(struct Node*)malloc(sizeof(struct Node));
Fourth=(struct Node*)malloc(sizeof(struct Node));

head->data=20;
head->next=second;

head->data=60;
second->nextxt=Third;


head->data=80;
Third->next=Fourth;


head->data=100;
Fourth->next=NULL;
struct Node*Rept=head;

while(condition) 


}