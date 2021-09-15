using namespace std;
//queue implementation
#include<iostream>
int n =10;
int rear = -1,front = -1;
int queue[10];

void enqueue(int element)
{
    //To check whether queue is empty
    if (front == -1 && rear == -1)
    {
        front = 0; rear = 0;
        queue[rear] = element;

    }
    //To check if  queue is full 
    else if ((rear + 1) % n == front)
    {
        cout<<"queue is full"<<"\n";
    }
    else
    {
        rear = (rear+1)%n;
        queue[rear] = element;
    }
   // printf("rear = %d",rear);
}

void dequeue()
{
    // check if queue is empty
    if (front == -1 && rear == -1)
    {
        cout<<"Nothing to delect"<<"\n";
    }
    // check if queue has single element
    else if (front == rear)
    {
        front = rear = -1;
    }
    // else dequeue
    else
    {
        front = (front +1) % n;
    }
}
void print()
{
    //check if queue is empty
    if (front == -1 && rear == -1)
    {
        cout<<"queue is empty"<<"\n";
    }
    else
    {
        int i = front;
        while ( i <= rear )
        {
            cout<<queue[i]<<" ";
            if (i == rear)
            {
                break;
            }
            i = (i + 1) % n; //because it is circular list
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
            print();
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