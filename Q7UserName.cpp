/*Write a C++ program to accept a username if the username has less than 6 characters 
or does contain any digit or special symbol.
*/

#include<iostream>
using namespace std;
int username(char *user)
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
    if(len<6)
        return 0;
    else
        return 1;
}
int main()
{
    char *user_name;
    int num;
    cout<<"Enter username\n";
    gets(user_name);
    try{
        num = username(user_name);
        if(num==0)
            throw num;
        else
            cout<<"Username is :- "<<user_name;
    }
    catch(int num){
        cout<<"Exception ! invalid username\n";
    }
    return 0;
}