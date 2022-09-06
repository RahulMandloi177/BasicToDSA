#include <iostream>
#include<string>
using namespace std;

void subSeq(string s, string ans)
{
    if (s.length() == 0)
    {   
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    subSeq(ros, ans);
    subSeq(ros, ans + ch);
}
int main()
{
    string s;
    cout << "Enter a string ";
    getline(cin, s);

    subSeq(s," ");
    cout<<endl;
}