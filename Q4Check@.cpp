/*Write a C++ program to accept an email address and throw an exception if it does not 
contain @ symbol.*/
#include<iostream>
using namespace std;

int main()
{
    
    try
    {
        string mail;
        cout<<"Enter email address"<<endl;
        cin>>mail;
        int i,flag=0;
        for(i=0;mail[i]!='\0';i++)
        {
            if(mail[i]=='@')
            {
                flag=1;
                // break;
            }
        }
        if(flag==1)
        {
            cout<<mail<<endl;
        }
        else{
            throw mail;
        }
    }
    catch(string mail)
    {
        cout<<"Exeception! :  @ symbol not found\n";
    }
    
    return 0;
}