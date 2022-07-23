// #include <iostream>
// #include <string>
// // #include <algorithm>

// using namespace std;

// int main()
// {
//     string str = "rahul RAHUL";

//     // Convert lower to uppercase

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - 32;
//         }
//     }
//     cout << str;

//     // Convert upper to lowercase

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] = str[i] + 32;
//         }
//     }
//     cout << str;
// }

// Using inbuilt function to convert the following

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{   
    // Convert lower to uppercase

    string s = "rahul";

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;
}