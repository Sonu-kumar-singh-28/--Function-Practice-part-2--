#include<iostream>
using namespace std;

 int addeven( int a)
 {
    int sum=0; 

    for( int i=0; i<=a; i = i+2)
    {
        sum= sum+i;
    }
    return sum;

 }

int main()
{
    int a;
    cout<<" Enter An Number :";
    cin>> a;


    int evennumber = addeven(a);

    cout<<" The Sum Of Even Number " << a << " is : " <<evennumber<< endl;
}