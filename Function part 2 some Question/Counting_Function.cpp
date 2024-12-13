#include<iostream>
using namespace std;

int printcount( int cou)
{
    int count=0;
    for( int i=0; i<=cou; i++)
    {
        count= count+i;
    }
    return count;
}

int main()
{
    int cou;
    cout<<" Enter An Number :";
    cin>> cou;

    int countnum = printcount( cou);

    cout<<"The Counting Of " << cou << " is:" << countnum<< endl;
    
}