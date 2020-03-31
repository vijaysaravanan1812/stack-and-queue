/* C++ program to implement basic stack 
operations */

#include <iostream> 
int MAX =100;
int top = -1;
int a[100];
using namespace std; 


void push(int x) 
{ 
	if (top >= (MAX - 1))
    { 
		cout << "Stack Overflow";  
	} 
	else 
    { 
		a[top++]= x; 
      	for(int i=0;i< top;i++)
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
		cout << "Stack Underflow"; 
	} 
	else 
    { 
		int x = a[top--]; 
        cout<<"index "<<top<<" pop from stack"<<"\n";
     	for(int i=0;i< top;i++)
        {   
            cout<<a[i]<<" ";
        }
        cout<<"\n";
	} 
} 
void peek() 
{ 
	if (top < 0)
    { 
		cout << "Stack is Empty"; 

	} 
	else 
    { 
		int x = a[--top]; 
		cout<<x<<"\n";
	} 
} 

bool isEmpty() 
{ 
	return (top < 0); 
} 

// Driver program to test above functions 
int main() 
{  
	push(10); 
	push(20); 
  	push(30); 
	push(50); 
 
	pop();
       peek();
    


	return 0; 
} 
