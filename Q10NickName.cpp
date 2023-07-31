/*. Write a C++ program to accept Nickname and throw an exception if it has greater than 8 
characters or does contain a digit or special symbol or space*/
#include<iostream>
#include<string.h>
using namespace std;
int Nickname(char *user)
{
    int i,len=0;
    for(i=0;user[i] != '\0'; i++)
    {
        if(user[i] == '0' || user[i]<= '9')
        {
            return 0;
        }
        else if(user[i] >= 32 && user[i] <= 47 || user[i] >= 58 && user[i] <= 64 )
        {
            return 0;
        }
        len++;
    }
    if(len>=8)
        return 0;
    else
        return 1;
}
int main()
{
    char *nick_name;
    int num;
    cout<<"Enter Nickname\n";
    gets(nick_name);
    try{
        num = Nickname(nick_name);
        if(num==0)
            throw num;
        else
            cout<<"Nickname is :- "<<nick_name;
    }
    catch(int num){
        cout<<"Exception ! invalid username\n";
    }
    return 0;
}