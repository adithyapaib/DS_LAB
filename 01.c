#include <stdio.h>

//Global variables
int a[10],ele,pos,n,i;

void create()
{
    printf("\nEnter the size of array \t");
    scanf("%d",&n);
    printf("\nEnter the elements \n");
     for(int i=0; i<n;i+=1)
         scanf("%d",&a[i]);
}


void insert()
{
    printf("\nEnter the position of Insertion \t");
    scanf("%d",&pos);
    if(pos>=n+1)
    {
        printf("\nInvalid position !\n");
        return;
    }
    printf("\nEnter the element \t");
    scanf("%d",&ele);
    for(i=n-1;i>=pos;i--)
          a[i+1]= a[i];
    a[pos] = ele;
    n++;
}


void display()
{
    printf("\nThe content of the array is \n");
    for(i=0;i<n;i++)
       printf("\n array[%d] = %d",i,a[i]);
}


void delete()
{
    printf("\nEnter the position of Deletion \t");
    scanf("%d",&pos);
    if(pos>=n+1)
    {
        printf("\nInvalid position !\n");
        return;
    }
    for(i=pos;i<n;i++)
          a[i]= a[i+1];
        --n;
}


void main()
{
    int choice;
     printf("\tMENU \n");
     while(1)  //Infinite loop
     {
         printf("\nChoice \t\t Operation\n\n");
         printf(" 1      \t CREATE\n");
         printf(" 2      \t DISPALY\n");
         printf(" 3      \t INSERT\n");
         printf(" 4      \t DELETE\n");
         printf(" 5      \t EXIT\n");
         printf("\nEnter a choice \t");
         scanf("%d",&choice);
         switch(choice)
         {
         case 1: create(); break;
         case 2: display(); break;
         case 3: insert(); break;
         case 4: delete(); break;
         case 5: exit(0) ; break;
         default: printf("\nInvalid Choice");
         }

     }
}

