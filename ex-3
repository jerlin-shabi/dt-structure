#include "stdio.h"
#include "stdlib.h"
void pop();
void push(int value);
void display();
struct node
{
int data;
struct node *link;
};
struct node *top=NULL,*temp;
int main()
{
int choice,data;
while(1) //infinite loop is used to insert/delete infinite number of elements in stack
{
printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
printf("\nEnter ur choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: //To push a new element into stack
printf("Enter a new element :");
scanf("%d",&data);
push(data);
break;
case 2: // pop the element from stack
pop();
break;
case 3: // Display the stack elements
display();
break;
case 4: // To exit
exit(0);
}
}
return 0;
}

void display()
{
temp=top;
if(temp==NULL)
{
printf("\nStack is empty\n");
}
printf("\n The Contents of the Stack are...");
while(temp!=NULL)
{
printf(" %d ->",temp->data);
temp=temp->link;
}
}
void push(int data)
{
temp=(struct node *)malloc(sizeof(struct node)); // creating a space for the new element.
temp->data=data;
temp->link=top;
top=temp;
display();
}
void pop()
{
if(top!=NULL)
{
printf("The poped element is %d",top->data);
top=top->link;
}
else
{
printf("\nStack Underflow");
}
display();
}
