
/*
#include<stdio.h>

#include<stdlib.h>
#define max 10

int push(int *,int *,int *);
int pop(int *,int *);


//push
int push(int *stack,int *top,int *value){
	if(*top<max)
	   stack[++*top]=*value;
	else
	printf("stackful");
	return 0;
}
//pop
int pop(int *stack,int *top){
	int value;
	if(*top>-1){
	
	   value=stack[*top--];
	   
}
	else
	printf("stackempty");
return value;
}


//main
int main(){
	int ch,choice,value,top=-1,stack[max],val;
	do{
	
	printf("\nstack operations");
	printf("\ndo you wanna continue");
	scanf("%d",&ch);
	printf("\n1.push \n 2.pop \n 3.exit");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			{
			printf("\nenter value to push");
			scanf("%d",&value);
			push(stack,&top,&value);
			break;}
		case 2:
			{
		
			val=pop(stack,&top);	
		 printf("\npopped value %d",val);
				break;
			}
	    case 3: exit(0);
	}
	
	
	}while(ch==1);
	return 0;
}*/



#include <stdio.h>
#define MAX 10 /* The maximum size of the stack */
#include <stdlib.h>

int push(int stack[], int *top, int value)
{
   if(*top < MAX )
   {
      *top = *top + 1;
      stack[*top] = value;
   }
  else
  {
      printf("The stack is full can not push a value\n");
      exit(0);
   }
return 0;}

int pop(int stack[], int *top, int * value)
{
   if(*top >= 0 )
   {
       *value = stack[*top];
      *top = *top - 1;
   }
   else
   {
      printf("The stack is empty can not pop a value\n");
      exit(0);
   }
return 0;}

int main()
{
   int stack[MAX];
   int top = -1;
   int n,value;
   do
   {
      do
      {
            printf("Enter the element to be pushed\n");
         scanf("%d",&value);
         push(stack,&top,value);
            printf("Enter 1 to continue\n");
         scanf("%d",&n);
      } while(n == 1);

      printf("Enter 1 to pop an element\n");
      scanf("%d",&n);
      while( n == 1)
      {
            pop(stack,&top,&value);
         printf("The value poped is %d\n",value);
            printf("Enter 1 to pop an element\n");
            scanf("%d",&n);
      }
      printf("Enter 1 to continue\n");
      scanf("%d",&n);
   } while(n == 1);


return 0;}


