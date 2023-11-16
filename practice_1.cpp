#include <bits/stdc++.h>
using namespace std;

// char to_char(int n)
// {
//     return '0' + n;
// }
// void dfs(int k, string prev, unordered_set<string> &seen, string &ans)
// {
//     for (int i = 0; i < k; i++)
//     {
//         string curr = prev + to_char(i);
//         // cout << "curr -> " << curr << endl;
//         if (seen.find(curr) == seen.end()) // curr is not visited
//         {
//             seen.insert(curr);
//             dfs(k, curr.substr(1), seen, ans);
//             ans.push_back(to_char(i));
//             // cout << "ans ->" << ans << endl;
//         }
//     }
// }
// string findString(int n, int k)
// {
//     string startingNode = string(n - 1, '0');
//     string ans;
//     unordered_set<string> seen;
//     cout << startingNode << endl;
//     dfs(k, startingNode, seen, ans);
//     ans += startingNode;
//     return ans;
// }
// int main()
// {
//     cout << findString(2, 2) << endl;
//     return 0;
// }

// void solve(int i, string &s, string &f, set<string> &st)
// {
//     if (i == s.length())
//     {
//         st.insert(f);
//         return;
//     }
//     f = f + s[i];
//     solve(i + 1, s, f, st);
//     f.pop_back();
//     solve(i + 1, s, f, st);
// }
// string betterString(string str1, string str2)
// {
//     set<string> s1;
//     set<string> s2;
//     string f1 = "";
//     solve(0, str1, f1, s1);
//     f1 = "";
//     solve(0, str2, f1, s2);
//     if (s1.size() > s2.size())
//     {
//         return str1;
//     }
//     else if (s2.size() > s1.size())
//     {
//         return str2;
//     }
//     return str1;
// }
// int main()
// {
//     string s1 = "gggl";
//     string s2 = "ggll";
//     cout << betterString(s1, s2) << endl;
//     return 0;
// }

// int BOSubarraySum(vector<int> &a, int n, int k)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += a[j];
//             if (sum == k)
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// int BFSubarraySum(vector<int> &a, int n, int k)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += a[k];
//             }
//             if (sum == k)
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// int countSubarray(vector<int> &v, int n, int k)
// {
//     // wrong code here
//     int i = -1;
//     int count = 0;
//     int j = 0;
//     int sum = 0;
//     while (i < n && j < n)
//     {
//         sum += v[j];
//         if (sum == k)
//         {
//             count++;
//             i++;
//             j++;
//         }
//         else if (sum < k)
//         {
//             j++;
//         }
//         else if (sum > k)
//         {
//             i++;
//             sum -= v[i];
//         }
//     }
//     return count;
// }

// int sumOfSubarray(vector<int> &v, int n)
// {
//     // correct code here for sum of all subarray elements
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += v[i];
//     }
//     return sum * (1 << (n - 1));
// }

// int main()
// {
//     vector<int> a{3, 1, 2, 4};
//     int n = a.size();
//     // cout << countSubarray(a, n, 6);
//     cout << BOSubarraySum(a, n, 6);
//     return 0;
// }

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

// int shortestCommonSupersequence(string s1, string s2, int m, int n)
// {
//     vector<vector<int>> v(m + 1, vector<int>(n + 1, 0));
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (s1[i - 1] == s2[j - 1])
//             {
//                 v[i][j] = 1 + v[i - 1][j - 1];
//             }
//             else
//             {
//                 v[i][j] = max(v[i - 1][j], v[i][j - 1]);
//             }
//         }
//     }
//     return (v[m][n] + (m - v[m][n]) + (n - v[m][n]));
// }
// int main()
// {
//     cout << shortestCommonSupersequence("abcd", "xycd", 4, 4);
//     return 0;
// }

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