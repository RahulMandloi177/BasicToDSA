#include<iostream>
using namespace std;

string moveXtoLast(string s)
{
    if(s.length()==0)
    {
        return "";

    }

    char ch=s[0];
    string ans=moveXtoLast(s.substr(1));
    if(ch=='x')
    {
        return ans+ch;
    }
    
        return (ch+ans);
    
}
int main()
{  
    string s;
   cout<<"Enter a string ";
   getline(cin,s);

   cout<<"String after moving all X to last :"<<moveXtoLast(s);
   
}