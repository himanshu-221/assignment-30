/*Write a C++ program to accept area pincode and throw an exception if it does not 
contain 6 digits*/
#include<iostream>
using namespace std;

int main()
{
    int Pin_code,count=0;
    cout<<"Enter area Pin Code\n";
    cin>>Pin_code;
    try{
        while(Pin_code)
        {
            Pin_code = Pin_code/10;
            count++;
        }
        if(count==6)
        throw 1;
        if(count!=6)
        throw 2;
    }
    catch(int num){
        if(num==1)
        cout<<"Valid Pin_code\n";
        if(num==2)
        cout<<"Invalid Pin_code\n";
    }
    return 0;
}