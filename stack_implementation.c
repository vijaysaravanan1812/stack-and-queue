//stack implimentation using dynamic array
#include<stdio.h>
#include<stdlib.h>


struct stack
{
    int capacity;//size of array
    int top;    //variable to store top element
    int *arr;   //dynamic array
};
int count = 0;

struct stack * create_stack(struct stack *s)
{
    int size;
    if (count == 1)
        printf("stack already exist\n");
    else
    {
        printf("Stack created with\n");

        printf("Size of stack\n");
        scanf("%d",&size);
        s = (struct stack *) malloc(sizeof(struct stack));
        s->arr = (int *) malloc(sizeof(int) *size);
        s ->top = -1;
        s ->capacity = size;
        printf("capacity %d\n",s->capacity);
        count = 1;//variable to avoid user to create stack again 
    }
     
    return s;
}

void dispose_stack(struct stack *s)
{
    if (count == 0)
        printf("There is no stack to dispoes\n");
    
    else if (s == NULL)
        printf("Stack not available\n");
    else
    {
        printf("stack dispose\n");
        free(s->arr);
        free(s);
        count = 0; //variable to avoid user to dispose stack again
    }
     
    
 }

void push(struct stack *s,int  x)
{
   
   
    if (s ->top >= s->capacity -1 )
    {
        printf("Stack overflow\n");
    }
    else if(s == NULL)
    {
        printf("First create stack and then insert element\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = x;
        for(int i=0;i <= s->top;i++)
        {
            printf("%d\t",s->arr[i]);
        }
        printf("\n");
        printf("%d  pushed into stack\n",x );
    }
    
}

int pop(struct stack *s)
{
    int x;
    if (s ->top <= 0)
    {
        printf("Stack underflow\n");
    }
    else
    {
        x = s->arr[s->top];
        s->top --;
        for(int i=0;i <= s->top;i++)
        {
            printf("%d\t",s->arr[i]);
        }
        printf("\n");
        return x;
    }
    
    
}

int main()
{
    int element,//element to stack
        x,      //getting choice
        x1;     //variable to hold poped element
    struct stack *s = NULL;
    do
    {   
        printf("1 - To create stack \n2 - To dispose stack \n3 - TO insert element\n4 - pop element\n0 -To exit\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            s = create_stack(s);
            break;
        case 2:
            dispose_stack(s);
            break;
        case 3:

            printf("Enter the element\n");
            scanf("%d",&element);
            push(s,element);
            break;
        case 4:
            printf("Element poped\n");
            x1 =  pop(s);
            printf("%d pop out of stack\n",x1);
            break;
        case 0:
            break;
        default:
            printf("Enter 1 to 4\n");
        
        }  
    } while (x != 0);
    return 0;

}