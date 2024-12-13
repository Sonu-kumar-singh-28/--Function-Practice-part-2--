#include<iostream>
using namespace std;

float getcelsius( float n)
{
    float f;

    cout<<" Enter The Number :";
    cin>>f;

    n = (f - 32) * 5/9 ;

    return n;

}


int main()
{
    float n;

    float  printcelsius = getcelsius( n);

    cout<<" The Celsius Of " << n << " is:" << printcelsius << endl;
} 