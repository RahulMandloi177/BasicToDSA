#include<iostream>
using namespace std;

string removeDup(string s)
{
    if(s.length()==0)
    {
        return "";

    }

    char ch=s[0];
    string ans=removeDup(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    
        return (ch+ans);
    
}
int main()
{  
    string s;
   cout<<"Enter a string ";
   getline(cin,s);

   cout<<"String after removing duplicates is :"<<removeDup(s);
   
}