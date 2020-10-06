///Tower of Hanoi
#include<iostream>

using namespace std;
int i =1;

void tower(int n,char source_pole,char destination_pole,char auxiliary_pole)
{
    if (n == 0)
        return;

    tower(n-1,source_pole, auxiliary_pole, destination_pole);
    cout<<"Step - "<<i<<" Move the disc " << n<<" from " <<source_pole <<" to "<<destination_pole<<"\n";
    i++;
    tower(n-1, auxiliary_pole, destination_pole, source_pole);
}
int main()
{
    int n;
    cout<<"Enter the number of disk"<<"\t";
    cin>>n;
    tower(n, 'A' ,'c' ,'B');
    return 0;
}