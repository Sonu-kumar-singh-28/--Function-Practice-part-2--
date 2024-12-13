#include<iostream>
using namespace std;

int addsum( int a, int b)
{
    int  sum = a+b;
    return sum;
}


int main()
{
    int a;
    int b;

    cout<<" Enter First Number :";
    cin>>a;

    cout<<" Enter Second Number :";
    cin>>b;

    int sumnumber= addsum(a,b);

    cout<<"The Sumn Of Two Number is:" << sumnumber<< endl; 
}