#include <bits/stdc++.h>
using namespace std;

// int shortestCommonSupersequence(string s1, string s2, int m, int n)
// {
//     string s = "";
//     for (int i = 0; i < m - 1; i++)
//     {
//         for (int j = i + 1; j < m; j++)
//         {
//             if (s2.find(s1.substr(i, j)) != string::npos)
//             {
//                 s += s1.substr(i, j);
//                 // cout << s1.substr(i, j) << endl;
//             }
//         }
//     }
//     // cout << s.length() << endl;
//     return s1.length() + s2.length() - s.length();
// }

int shortestCommonSupersequence(string s1, string s2, int m, int n)
{
    vector<vector<int>> v(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                v[i][j] = 1 + v[i - 1][j - 1];
            }
            else
            {
                v[i][j] = max(v[i - 1][j], v[i][j - 1]);
            }
        }
    }
    return (v[m][n] + (m - v[m][n]) + (n - v[m][n]));
}

int main()
{
    cout << shortestCommonSupersequence("abcd", "xycd", 4, 4);
    return 0;
}

// bool isRotated(string str1, string str2)
// {
//     if (str1.length() != str2.length())
//     {
//         return false;
//     }
//     string s = str2 + str2;
//     if (s.find(str1))
//     {
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     return 0;
// }

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