#include<iostream>
using namespace std;


float getfarenheit(float n)
{
    float c;
    
    cout<<" Enter The Number :";
    cin>> c;

    n  =  c * 9/5 + 32 ;
    return n;
}

int main()
{
    float n;

    float printfarenheit = getfarenheit( n);

    cout<<" The Number Of Farenheit "<< n << " is:" <<printfarenheit<< endl;
}