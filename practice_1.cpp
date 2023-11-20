#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ThreeSum(vector<int> &a)
{
    vector<vector<int>> ans;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            for (int k = j + 1; k < a.size(); k++)
            {
                if (a[i] + a[j] + a[k] == 0)
                {
                    ans.push_back({a[i], a[j], a[k]});
                }
            }
        }
    }
    return ans;
}
vector<vector<int>> ThreeSum1(vector<int> &a)
{
    set<vector<int>> ans;
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size() - 2; i++)
    {
        int j = i + 1;
        int k = a.size() - 1;
        while (j < k && j < a.size() && k > i)
        {
            int sum = a[i] + a[j] + a[k];
            if (sum == 0)
            {
                vector<int> temp = {a[i], a[j], a[k]};
                // sort(temp.begin(), temp.end());
                ans.insert(temp);
                j++, k--;
            }
            else if (sum < k)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return vector<vector<int>>(ans.begin(), ans.end());
}
int main()
{
    vector<int> a{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = ThreeSum1(a);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// struct Node
// {
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };
// Node *inputList(int size)
// {
//     Node *head, *tail;
//     int val;
//     cin >> val;
//     head = tail = new Node(val);
//     while (--size)
//     {
//         cin >> val;
//         tail->next = new Node(val);
//         tail = tail->next;
//     }
//     return head;
// }
// void printList(Node *n)
// {
//     if (n)
//     {
//         while (n)
//         {
//             cout << n->data << " ";
//             n = n->next;
//         }
//     }
//     else
//         cout << " ";
// }
// Node *findIntersection(Node *h1, Node *h2)
// {
//     Node *h, *t;
//     t = h = new Node(0);
//     while (h1 && h2)
//     {
//         if (h1->data == h2->data)
//         {
//             t->next = new Node(h1->data);
//             t = t->next;
//             h1 = h1->next;
//             h2 = h2->next;
//         }
//         else if (h1->data > h2->data)
//         {
//             h2 = h2->next;
//         }
//         else
//         {
//             h1 = h1->next;
//         }
//     }
//     return h->next;
// }
// int main()
// {
//     Node *h1 = new Node(1);
//     h1->next = new Node(2);
//     h1->next->next = new Node(3);
//     h1->next->next->next = new Node(4);
//     h1->next->next->next->next = new Node(6);
//     Node *h2 = new Node(2);
//     h2->next = new Node(4);
//     h2->next->next = new Node(6);
//     h2->next->next->next = new Node(8);
//     printList(findIntersection(h1, h2));
//     return 0;
// }

// char to_char(int n) { return '0' + n; }
// int main()
// {
//     string str = "abc";
//     cout << str + '1' << endl;
//     cout << str << endl;
//     cout << str + to_char(1) << endl;
//     return 0;
// }

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