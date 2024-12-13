#include<iostream>  // headerfile 
using namespace std; 

float gettrangle( float t)
{
    float a,b,c;
    cout<<" Enter First Number  Of Trangle :";  // first value input 
    cin>>a;

    cout<<" Enter Second Number Of Trangle :"; // second value input
    cin>>b;

    cout<<" Enter Third Number OF Trangle :"; // third value input
    cin>>c;



    t = a+b+c;   // data stored 
    return t; // return data for printtrangle 
}

int main()// main function declared 
{
    float t; // declared datatype and variable declaration 
    int printtrangle = gettrangle(t); // data stored for gettrangle 

    cout<<"The  Area Of Trangle: is:" << printtrangle << endl; // printing statement 
}

// area  of ractangle in cpp   by using input by user 

