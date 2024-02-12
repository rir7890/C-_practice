#include <bits/stdc++.h>
using namespace std;

////Recursive sequence question of GFG
// long long sequence(int n)
// {
//     int mod = 1e9 + 7;
//     long long ans = 0;
//     long long val = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         long long curr = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             curr = (curr * val) % mod;
//             val++;
//         }
//         ans = (ans + curr) % mod;
//     }
//     return ans % mod;
// }
// int main()
// {
//     cout << sequence(5) << endl;
//     return 0;
// }
// long long f(int n)
// {
//     long long ans = 0;
//     int l = 1;
//     for (int i = 0; i < n; i++)
//     {
//         long long s = 1;
//         for (int j = l; j <= l + i; j++)
//         {
//             s = (s * j) % 10e9 + 7;
//         }
//         l = l + i + 1;
//         ans += (s % 10e9 + 7);
//     }
//     return (long long)ans % 10e+7;
// }
// int main()
// {
//     cout << f(5) << endl;
//     return 0;
// }

////Post Order Traversal using loop using single stack
// struct Node
// {
//     int data;
//     Node *right;
//     Node *left;
// };
// Node *newNode(int data)
// {
//     Node *t = new Node;
//     t->data = data;
//     t->left = nullptr;
//     t->right = nullptr;
//     return t;
// }
// vector<int> Postorder(Node *curr)
// {
//     vector<int> ans;
//     if (!curr)
//         return ans;
//     stack<Node *> st;
//     while (!st.empty())
//     {
//         if (curr != nullptr)
//         {
//             st.push(curr);
//             curr = curr->left;
//         }
//         else
//         {
//             Node *temp = st.top()->right;
//             if (temp == nullptr)
//             {
//                 temp = st.top();
//                 st.pop();
//                 ans.push_back(temp->data);
//                 while (!st.empty() && st.top()->right == temp)
//                 {
//                     temp = st.top();
//                     st.pop();
//                     ans.push_back(temp->data);
//                 }
//             }
//             else
//             {
//                 curr = temp;
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     Node *r = newNode(1);
//     r->left = newNode(2);
//     r->right = newNode(6);
//     r->left->left = newNode(8);
//     r->left->right = newNode(9);
//     r->right->left = newNode(10);
//     r->right->right = newNode(12);
//     vector<int> ans = Postorder(r);
//     for (auto x : ans)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

////postorder traversal using loops
// struct Node
// {
//     int data;
//     Node *right;
//     Node *left;
// };
// Node *newNode(int data)
// {
//     Node *t = new Node;
//     t->data = data;
//     t->left = nullptr;
//     t->right = nullptr;
//     return t;
// }
// vector<int> Postorder(Node *curr)
// {
//     vector<int> ans;
//     if (!curr)
//         return ans;
//     stack<Node *> st1;
//     stack<Node *> st2;
//     st1.push(curr);
//     while (!st1.empty())
//     {
//         Node *t = st1.top();
//         st1.pop();
//         st2.push(t);
//         if (t->left)
//         {
//             st1.push(t->left);
//         }
//         if (t->right)
//         {
//             st1.push(t->right);
//         }
//     }
//     while (!st2.empty())
//     {
//         ans.push_back(st2.top()->data);
//         st2.pop();
//     }
//     return ans;
// }
// int main()
// {
//     Node *r = newNode(1);
//     r->left = newNode(2);
//     r->right = newNode(6);
//     r->left->left = newNode(8);
//     r->left->right = newNode(9);
//     r->right->left = newNode(10);
//     r->right->right = newNode(12);
//     vector<int> ans = Postorder(r);
//     for (auto x : ans)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

//// Inorder Traversal using loops
// struct Node
// {
//     int data;
//     Node *right;
//     Node *left;
// };
// Node *newNode(int data)
// {
//     Node *t = new Node;
//     t->data = data;
//     t->left = nullptr;
//     t->right = nullptr;
//     return t;
// }
// vector<int> Inorder(Node *curr)
// {
//     vector<int> ans;
//     if (!curr)
//         return ans;
//     stack<Node *> st;
//     while (true)
//     {
//         if (curr)
//         {
//             st.push(curr);
//             curr = curr->left;
//         }
//         else
//         {
//             if (st.empty())
//             {
//                 break;
//             }
//             curr = st.top();
//             ans.push_back(curr->data);
//             st.pop();
//             curr = curr->right;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     Node *r = newNode(1);
//     r->left = newNode(2);
//     r->right = newNode(6);
//     r->left->left = newNode(8);
//     r->left->right = newNode(9);
//     r->right->left = newNode(10);
//     r->right->right = newNode(12);
//     vector<int> ans = Inorder(r);
//     for (auto x : ans)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

////Preorder Traversal using loop
// struct Node
// {
//     int data;
//     Node *right;
//     Node *left;
// };
// Node *newNode(int data)
// {
//     Node *t = new Node;
//     t->data = data;
//     t->left = nullptr;
//     t->right = nullptr;
//     return t;
// }
// vector<int> Preorder(Node *curr)
// {
//     vector<int> ans;
//     if (curr == nullptr)
//         return ans;
//     stack<Node *> st;
//     while (true)
//     {
//         if (curr != nullptr)
//         {
//             st.push(curr);
//             ans.push_back(curr->data);
//             curr = curr->left;
//         }
//         else
//         {
//             if (st.empty())
//             {
//                 break;
//             }
//             curr = st.top();
//             st.pop();
//             curr = curr->right;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     Node *r = newNode(1);
//     r->left = newNode(2);
//     r->right = newNode(6);
//     r->left->left = newNode(8);
//     r->left->right = newNode(9);
//     r->right->left = newNode(10);
//     r->right->right = newNode(12);
//     vector<int> ans = Preorder(r);
//     for (auto x : ans)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

////Preorder traversal using loop
// struct Node
// {
//     int data;
//     Node *right;
//     Node *left;
// };
// Node *newNode(int data)
// {
//     Node *t = new Node;
//     t->data = data;
//     t->left = nullptr;
//     t->right = nullptr;
//     return t;
// }
// vector<int> Preorder(Node *root)
// {
//     vector<int> ans;
//     if (root == nullptr)
//         return ans;
//     stack<Node *> st;
//     st.push(root);
//     while (!st.empty())
//     {
//         int size = st.size();
//         Node *t = st.top();
//         st.pop();
//         ans.push_back(t->data);
//         if (t->right != nullptr)
//         {
//             st.push(t->right);
//         }
//         if (t->left != nullptr)
//         {
//             st.push(t->left);
//         }
//     }
//     return ans;
// }
// int main()
// {
//     Node *r = newNode(1);
//     r->left = newNode(2);
//     r->right = newNode(6);
//     r->left->left = newNode(8);
//     r->left->right = newNode(9);
//     r->right->left = newNode(10);
//     r->right->right = newNode(12);
//     vector<int> ans = Preorder(r);
//     for (auto x : ans)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

////atoi implementation which converts string to integer
// int ato(string str)
// {
//     int sum = 0;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (isalpha(str[i]))
//         {
//             return -1;
//         }
//         sum = sum * 10 + (str[i] - '0');
//     }
//     return sum;
// }
// int ato2(string s)
// {
//     int res = 0;
//     int sign = 1;
//     int i = 0;
//     if (s[0] == '-')
//     {
//         sign = -1;
//         i++;
//     }
//     for (; i < s.length(); i++)
//     {
//         if ()
//         {
//             return -1;
//         }
//         res = res * 10 + (s[i] - '0');
//     }
//     return sign * res;
// }
// int main()
// {
//     cout << ato("887") << endl;
//     cout << ato2("-887") << endl;
//     return 0;
// }

//// median of the 2d matrix sorted
// int countLessThanMid(vector<int> &row, int mid)
// {
//     int l = 0;
//     int h = row.size() - 1;
//     while (l <= h)
//     {
//         int md = (l + h) >> 1;
//         if (row[md] <= mid)
//         {
//             l = md + 1;
//         }
//         else
//         {
//             h = md - 1;
//         }
//     }
//     return l;
// }
// int findMedian(vector<vector<int>> &A)
// {
//     int row = A.size();
//     int col = A[0].size();
//     int low = INT_MAX;
//     int high = INT_MIN;
//     for (int i = 0; i < row; i++)
//     {
//         if (A[i][0] < low)
//         {
//             low = A[i][0];
//         }
//         if (A[i][col - 1] > high)
//         {
//             high = A[i][col - 1];
//         }
//     }
//     int desired = (row * col) / 2;
//     while (low <= high)
//     {
//         int mid = (low + high) >> 1;
//         int cnt = 0;
//         for (int i = 0; i < row; i++)
//         {
//             cnt += countLessThanMid(A[i], mid);
//         }
//         if (cnt <= desired)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return low;
// }
// int main()
// {
//     int row = 3;
//     int col = 3;
//     vector<vector<int>> arr = {{1, 4, 5}, {1, 2, 3}, {3, 4, 5}};
//     cout << findMedian(arr) << endl;
//     return 0;
// }