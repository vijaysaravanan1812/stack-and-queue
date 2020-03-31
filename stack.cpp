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
        cout<<top<<" pop from stack"<<"\n";
     	for(int i=0;i< top;i++)
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
		cout << "Stack is Empty"; 
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
	push(10); 
	push(20); 
  	push(30); 
	push(50); 
  	push(60);
	pop();


	return 0; 
} 
