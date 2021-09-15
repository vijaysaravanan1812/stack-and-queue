/* C++ program to implement basic stack in static
 array
operations */

#include <iostream> 
int MAX =10;
int top = -1;
int a[100];
using namespace std; 


void push(int x) 
{ 
	if (top >= (MAX - 1))
    { 
		cout << "Stack Overflow\n";  
	} 
	else 
    { 
		top++;
		a[top]= x; 
      	for(int i=0;i <= top;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
		cout << x << " pushed into stack\n"; 
	} 
} 

void pop() 
{ 
	if (top < 0)
    { 
		cout << "Stack Underflow"<<"\n "; 
	} 
	else 
    { 
		
		int x = a[top]; 
		top--;
        cout<<x<<" pop from stack\n";
     	for(int i=0;i<= top;i++)
        {   
            cout<<a[i]<<" ";
        }
        cout<<"\n";
	} 
} 
int peek() 
{ 
	if (top < 0)
    { 
		cout << "Stack is Empty\n"; 
		return 0; 
	} 
	else 
    { 
		int x = a[top]; 
		return x; 
	} 
} 

bool isEmpty() 
{ 
	return (top < 0); 
} 

// Driver program to test above functions 
int main() 
{  
	int x;
	int round = 1;
	do
	{
		int choice;
		cout<<"Push - 1 \nPop - 2\nEnter your choice";
		cin>>choice;
		switch (choice)
		{
		case 1:
			int element;
			printf("Enter the element \n");
			scanf("%d",&element);
			push(element);
			element = 0;
			break;
		case 2:
			
			pop();
			break;
		default:
			break;
		}	

		cout<<" ---------------- "<<round <<" round completed ---------------- \n";
		printf("Do you want to exit press 0 or stay press 1\n");
		scanf("%d", &x);
		round++;
	} while (x != 0);
	


	return 0; 
} 
