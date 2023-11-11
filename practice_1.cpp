#include <bits/stdc++.h>
using namespace std;

// #define MAX_Chars 256
// bool areIsomorphic(string const str1, string const str2)
// {
//     if (str1.length() != str2.length())
//         return false;
//     bool marked[MAX_Chars] = {false};
//     int map[MAX_Chars];
//     memset(map, -1, sizeof(map));
//     for (int i = 0; i < str1.length(); i++)
//     {
//         if (map[str1[i]] == -1)
//         {
//             if (marked[str2[i]] == true)
//             {
//                 return false;
//             }
//             map[str1[i]] = str2[i];
//             marked[str2[i]] = true;
//         }
//         else if (map[str1[i]] != str2[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int a[5];
//     for (auto it : a)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }