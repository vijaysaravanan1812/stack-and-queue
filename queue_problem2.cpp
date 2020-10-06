using namespace std;
// queue implementation by linked list
#include<iostream>

struct node
{
    int data;
    node *next;
};
node *front = NULL;    
node *rear  = NULL;


void enqueue(int x)
{
    //creating the new node 
    node* newnode = new node();
    newnode ->data = x;

    //check if queue is empty
    if (rear == NULL)
    {
        front = rear = newnode;
    }
    
    else 
    {
        rear ->next = newnode;
        rear = newnode;
        rear->next = NULL;
    }
}

void dequeue()
{
    node *temp = NULL;
    temp = front;

    if (front  == NULL && rear == NULL)
    {
        cout<<"queue is empty"<<"\n";
    }
    
    else if (front == rear)
    {
        front = NULL;
        rear = NULL;
        free(temp);
    }

    else
    {
        front = front ->next;
        free(temp);
    }
}

void print(node *temp)
{
    if (front == NULL)
    {
        cout<<"Nothing to print"<<"\n";
    }
    else
    {
        while (temp != NULL)
        {
            cout<<temp ->data<<" ";
            temp = temp ->next;
        }
        cout<<"\n";
    }
    

}

int main()
{
     int round;
    do
    {
        int k ;
        cout<<"Enqueue - 1\nDequeue -2\nPrint -3\n";
        cin>>k;
        switch (k)
        {
        case 1:
            int x;
            cout<<"Enter the element"<<"\t";
            cin>>x;
            enqueue(x);
            break;
        case 2:
            cout<<"Deleting front element"<<"\n";
            dequeue();
            break;
        case 3:
            print(front);
            break;
        default:
            cout<<"Enter 1 to 3"<<"\n";
            break;
        }
    cout<<"--------------------------------------\n";
    cout<<"Enter 1 to continue or 0 to quit\t";
    cin>>round;
    } while (round != 0);
}