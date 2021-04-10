#include <stdio.h>
#define MAX 5
int stack[5];
int top = -1;

void push()
{
    int ele;
 if(top == MAX-1)
     printf("\nStack Full");
  else
  {
      printf("\nEnter the element \t");
      scanf("%d",&ele);
      stack[++top] = ele;
  }
}

void pop()
  {
      if(top == -1)
         printf("\n Stack is empty");
      printf("\nThe popped element is %d",stack[top--]);
  }


  void display()
{
     int i;
     if(top==-1)
          printf("\n Sorry Empty Stack");
      else
        {
           printf("\nThe elements of the stack are\n");
           for(i=top;i>=0;i--)
                printf("stack[%d] = %d\n",i, stack[i]);
        }
 }

void palindrome()
{
    int i,count=0;
    for(i=0; i<=(top/2); i++)
    {
        if(stack[i] == stack[top-i])
            count++;
    }
    if((top/2+1)==count)
        printf("\n Stack contents are Palindrome");
    else
        printf("\nStack contents are not palindrome");
}


void main()
{
    int choice;
    while(1)
     {
      printf("\n STACK OPERATIONS\n");
      printf("1.Push\n 2.Pop\n 3.Display\n 4.Palindrome\n 5.Exit\n");
      printf("Enter your choice\n");
      scanf("%d",&choice);
      switch(choice)
       {
        case 1:push();
               break;
        case 2:pop();
               break;
        case 3:display();
               break;
        case 4:palindrome();
               break;
        case 5:return;
        default: printf("Invalid choice\n");
        }
      }
}
