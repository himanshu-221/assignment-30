/*Write a C++ program to accept a password and throw an exception if the password has 
less than 6 characters or does not contain a digit or does not contain any special 
character or does not contain any capital letter.*/
#include<iostream>
using namespace std;
int Password(char *password)
{
    //cout<<"hii";
    int i,len=0,digit=0,symbol=0,charecter=0;
    for(i=0;password[i] != '\0'; i++)
    {
        ///cout<<"Hii\n";
        if(password[i] == '0' || password[i]<= '9')
        {
            digit=1;    // for digit
        }
        if(password[i] >= 32 && password[i] <= 47 || password[i] >= 58 && password[i] <= 64 )
        {
            symbol=1; // for special charecter
        }
        if(password[i] >= 65 && password[i] <= 90 || password[i] >= 97 && password[i] <= 122)
        {
            charecter =1;    // for charecter small and capital
        }
        len++;
    }
    if(digit == 1 && symbol == 1 && charecter == 1 && len >= 6)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int num;
    char *pass_word;
    cout<<"Enter a strong password\n";
    cin>>pass_word;
    try{
        num = Password(pass_word);
        if(num==0)
            throw num;
        else
            cout<<"Password is :- "<<pass_word;
    }
    catch(int num){
        cout<<"Exception ! Enter a strong password\n";
    }
    
    
    return 0;
}