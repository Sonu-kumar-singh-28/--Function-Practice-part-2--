#include<iostream> // header file 
using namespace std; // std is a standered file that are declared function

float getradius(float rad) // function declared by creating user 
{
   rad = 3.14*rad*rad; // radius  formula 
    return rad;
}


int  main() // main function 
{
    float rad; // deeclare datatype and variable 

    cout<<" Enter The Number :";
    cin>> rad; //  user inpuut 

    float printradius = getradius( rad); // stored the value 

    cout<<" The Radius Of " << rad<< "Is :" << printradius<< endl; // 
}