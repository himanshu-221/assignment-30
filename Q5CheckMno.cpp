/*Write a C++ program to accept a mobile number and throw an exception if it does not 
contain 10 digits*/
#include<iostream>
using namespace std;

int main()
{
    long long Num,count=0;
    cout<<"Enter MNo.\n";
    cin>>Num;
    try{
        while(Num)
        {
            Num = Num/10;
            count++;
        }
        if(count==10)
        {
            throw 1;
        }
        if(count !=10)
        {
            throw 2;
        }
    }
    catch(int num){
        if(num==1)
        {
            cout<<"Valid Mobile number\n";
        }
        if(num==2)
        cout<<"Invalid mobile number\n";

    }
    return 0;
}