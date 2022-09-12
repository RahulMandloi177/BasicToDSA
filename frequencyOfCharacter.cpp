#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "rrahulraj";
    int freq[26];
    int i;

    for (i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }

    char ans = 'a';
    int maxF = 0;

    for (i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }
    cout << maxF << " " << ans << endl;
}