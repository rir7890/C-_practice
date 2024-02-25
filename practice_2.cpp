#include <bits/stdc++.h>
using namespace std;

/////Reach a given score
// long long int count(long long int n)
// {
//     long long int dp[n + 1];
//     memset(dp, 0, sizeof(dp));
//     dp[0] = 1;
//     for (long long int i = 3; i <= n; i++)
//     {
//         dp[i] += dp[i - 3];
//     }
//     for (long long int i = 5; i <= n; i++)
//     {
//         dp[i] += dp[i - 5];
//     }
//     for (long long int i = 10; i <= n; i++)
//     {
//         dp[i] += dp[i - 10];
//     }
//     return dp[n];
// }

///////Bottom view of the binary tree
// struct node
// {
//     int data;
//     node *left;
//     node *right;
// };
// node *newNode(int data)
// {
//     node *n = new node;
//     n->data = data;
//     n->left = n->right = nullptr;
//     return n;
// }
// vector<int> BottomView(node *root)
// {
//     vector<int> res;
//     if (root == nullptr)
//         return res;
//     map<int, vector<int>> mp;
//     queue<pair<node *, int>> q;
//     q.push({root, 0});
//     while (!q.empty())
//     {
//         auto t = q.front();
//         q.pop();
//         mp[t.second].push_back(t.first->data);
//         if (t.first->left)
//             q.push({t.first->left, t.second - 1});
//         if (t.first->right)
//             q.push({t.first->right, t.second + 1});
//     }
//     for (auto i : mp)
//     {
//         res.push_back(i.second.back());
//     }
//     return res;
// }
// int main()
// {
//     node *root = newNode(10);
//     root->left = newNode(20);
//     root->right = newNode(30);
//     root->left->left = newNode(40);
//     root->left->right = newNode(60);
//     for (auto i : BottomView(root))
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

//////top view of the binary tree
// struct node
// {
//     int data;
//     node *right;
//     node *left;
// };
// node *newNode(int data)
// {
//     node *n = new node;
//     n->data = data;
//     n->right = n->left = nullptr;
//     return n;
// }
// vector<int> topViewOfBinaryTree(node *root)
// {
//     if (root == nullptr)
//         return {-1};
//     queue<pair<node *, int>> q;
//     vector<int> res;
//     map<int, int> mp;
//     q.push({root, 0});
//     while (!q.empty())
//     {
//         auto t = q.front();
//         q.pop();
//         int line = t.second;
//         node *n = t.first;
//         if (mp.find(line) == mp.end())
//         {
//             mp[line] = n->data;
//         }
//         if (n->left)
//         {
//             q.push({n->left, line - 1});
//         }
//         if (n->right)
//         {
//             q.push({n->right, line + 1});
//         }
//     }
//     for (auto i : mp)
//     {
//         res.push_back(i.second);
//     }
//     return res;
// }
// int main()
// {
//     struct node *root = newNode(1);
//     root->left = newNode(2);
//     root->left->left = newNode(4);
//     root->left->right = newNode(10);
//     root->left->left->right = newNode(5);
//     root->left->left->right->right = newNode(6);
//     root->right = newNode(3);
//     root->right->left = newNode(9);
//     root->right->right = newNode(10);
//     for (auto i : topViewOfBinaryTree(root))
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

//////top view of the binary tree
// struct node
// {
//     int data;
//     node *right;
//     node *left;
// };
// node *newNode(int data)
// {
//     node *n = new node;
//     n->data = data;
//     n->right = n->left = nullptr;
//     return n;
// }
// vector<int> topViewOfBinaryTree(node *root)
// {
//     if (root == nullptr)
//     {
//         return {-1};
//     }
//     queue<node *> q;
//     vector<int> res;
//     q.push(root);
//     int level = 0;
//     while (!q.empty())
//     {
//         int s = q.size();
//         for (int i = 0; i < s; i++)
//         {
//             node *t = q.front();
//             q.pop();
//             if (level == 0)
//             {
//                 res.push_back(t->data);
//             }
//             else
//             {
//                 if (i == 0)
//                 {
//                     res.insert(res.begin(), t->data);
//                 }
//                 if (i == s - 1)
//                 {
//                     res.insert(res.end(), t->data);
//                 }
//             }
//             if (t->left)
//                 q.push(t->left);
//             if (t->right)
//                 q.push(t->right);
//         }
//         level++;
//     }
//     return res;
// }
// int main()
// {
//     struct node *root = newNode(1);
//     root->left = newNode(2);
//     root->left->left = newNode(4);
//     root->left->right = newNode(10);
//     root->left->left->right = newNode(5);
//     root->left->left->right->right = newNode(6);
//     root->right = newNode(3);
//     root->right->left = newNode(9);
//     root->right->right = newNode(10);
//     for (auto i : topViewOfBinaryTree(root))
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

///////insertt the range of element at given index
// int main()
// {
//     vector<int> original{1, 2, 3, 4, 5};
//     vector<int> temp{2, 5, 9, 0, 3, 10};
//     for (auto i : original)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     temp.insert(temp.end(), original.begin(), original.end());
//     for (auto it : temp)
//     {
//         cout << it << " ";
//     }
//     cout << endl;
//     return 0;
// }

////Vertical order traversal of binary tree
// struct node
// {
//     int data;
//     node *left, *right;
// };
// vector<vector<int>> findVertical(node *root)
// {
//     map<int, map<int, multiset<int>>> nodes;
//     queue<pair<node *, pair<int, int>>> q;
//     q.push({root, {0, 0}});
//     while (!q.empty())
//     {
//         auto n = q.front();
//         q.pop();
//         node *t = n.first;
//         int x = n.second.first;
//         int y = n.second.second;
//         nodes[x][y].insert(t->data);
//         if (t->left)
//         {
//             q.push({t->left,
//                     {x - 1, y + 1}});
//         }
//         if (t->right)
//         {
//             q.push({t->right,
//                     {x + 1, y + 1}});
//         }
//     }
//     vector<vector<int>> res;
//     for (auto p : nodes)
//     {
//         vector<int> col;
//         for (auto it : p.second)
//         {
//             col.insert(col.end(), it.second.begin(), it.second.end());
//         }
//         res.push_back(col);
//     }
//     return res;
// }
// node *newNode(int data)
// {
//     node *n = new node;
//     n->data = data;
//     n->right = n->left = nullptr;
//     return n;
// }
// int main()
// {
//     struct node *root = newNode(1);
//     root->left = newNode(2);
//     root->left->left = newNode(4);
//     root->left->right = newNode(10);
//     root->left->left->right = newNode(5);
//     root->left->left->right->right = newNode(6);
//     root->right = newNode(3);
//     root->right->left = newNode(9);
//     root->right->right = newNode(10);
//     vector<vector<int>> verticalTraversal;
//     verticalTraversal = findVertical(root);
//     cout << "The Vertical Traversal is : " << endl;
//     for (auto vertical : verticalTraversal)
//     {
//         for (auto nodeVal : vertical)
//         {
//             cout << nodeVal << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//////maximum sum problem
// class solution
// {
// public:
//     int maxSum(int n)
//     {
//         if (n < 12)
//         {
//             return n;
//         }
//         int sum = maxSum(n / 2) + maxSum(n / 3) + maxSum(n / 4);
//         ////if we futher divide the number we get less than the current number then
//         ////we donot have to add those number , so we will add our original number
//         ////that is why we use max(sum,n) if sum is greater than return it if it is not then return n
//         return max(sum, n);
//     }
// };

//////zig zag traversal of binary tree
// class Node
// {
// public:
//     int data;
//     Node *right;
//     Node *left;
//     Node(int data) : data(data), right(nullptr), left(nullptr) {}
// };
// vector<vector<int>> zigzagTraversal(Node *root)
// {
//     vector<vector<int>> result;
//     if (root == nullptr)
//         return result;
//     queue<Node *> q;
//     q.push(root);
//     bool leftToRight = true;
//     while (!q.empty())
//     {
//         int size = q.size();
//         vector<int> row(size);
//         for (int i = 0; i < size; i++)
//         {
//             Node *n = q.front();
//             q.pop();
//             int index = leftToRight ? i : size - 1 - i;
//             row[index] = n->data;
//             if (n->left)
//                 q.push(n->left);
//             if (n->right)
//                 q.push(n->right);
//         }
//         leftToRight = !leftToRight;
//         result.push_back(row);
//     }
//     return result;
// }
// int main()
// {
//     Node *root = new Node(3);
//     root->left = new Node(9);
//     root->right = new Node(20);
//     root->right->left = new Node(15);
//     root->right->right = new Node(7);
//     vector<vector<int>> ans;
//     ans = zigzagTraversal(root);
//     cout << "Zig Zag Traversal of Binary Tree" << endl;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

////boundary traversal of a binary tree
// struct node
// {
//     int data;
//     node *left, *right;
// };
// bool isleaf(node *root)
// {
//     return root->left == nullptr and root->right == nullptr;
// }
// void addLeftBoundary(node *root, vector<int> &res)
// {
//     node *curr = root->left;
//     while (curr)
//     {
//         if (!isLeaf(curr))
//             res.push_back(curr->data);
//         if (curr->left)
//             curr = curr->left;
//         else
//             curr = curr->right;
//     }
// }
// void addRightBoundary(node *root, vector<int> &res)
// {
//     node *curr = root->right;
//     vector<int> tmp;
//     while (curr)
//     {
//         if (!isleaf(curr))
//             tmp.push_back(curr->data);
//         if (curr->right)
//             curr = curr->right;
//         else
//             curr = curr->left;
//     }
//     for (int i = tmp.size() - 1; i >= 0; i--)
//     {
//         res.push_back(tmp[i]);
//     }
// }
// void addLeaves(node *root, vector<int> &res)
// {
//     if (isleaf(root))
//     {
//         res.push_back(root->data);
//         return;
//     }
//     if (root->left)
//         addLeaves(root->left, res);
//     if (root->right)
//         addLeaves(root->right, res);
// }
// vector<int> printBoundary(node *root)
// {
//     vector<int> res;
//     if (root == nullptr)
//         return res;
//     if (isleaf(root))
//     {
//         res.push_back(root->data);
//         return res;
//     }
//     if (!isleaf(root))
//         res.push_back(root->data);
//     addLeftBoundary(root, res);
//     addLeaves(root, res);
//     addRightBoundary(root, res);
//     return res;
// }
// node *newNode(int data)
// {
//     node *n = new node;
//     n->data = data;
//     n->right = n->left = nullptr;
//     return n;
// }
// int main()
// {
//     struct node *root = newNode(1);
//     root->left = newNode(2);
//     root->left->left = newNode(3);
//     root->left->left->right = newNode(4);
//     root->left->left->right->left = newNode(5);
//     root->left->left->right->right = newNode(6);
//     root->right = newNode(7);
//     root->right->right = newNode(8);
//     root->right->right->left = newNode(9);
//     root->right->right->left->left = newNode(10);
//     root->right->right->left->right = newNode(11);
//     vector<int> boundaryTraversal;
//     boundaryTraversal = printBoundary(root);
//     cout << "The Boundary Traversal is : ";
//     for (int i = 0; i < boundaryTraversal.size(); i++)
//     {
//         cout << boundaryTraversal[i] << " ";
//     }
//     return 0;
// }

////boundary traversal of a binary tree
// struct node
// {
//     int data;
//     node *left, *right;
// };
// bool isleaf(node *root)
// {
//     return root->left == nulltpr and root->right == nulltpr;
// }
// void addLeftBoundary(node *left, vector<int> &res)
// {
//     node *cur = root->left;
//     while (cur)
//     {
//         if (!isleaf(cur))
//         {
//             res.push_back(curr->data);
//         }
//         if (cur->left)
//             cur = cur->left;
//         else
//             cur = cur->right;
//     }
// }
// void addRightBoundary(node *root, vector<int> &res)
// {
//     node *curr = root->right;
//     vector<int> tmp;
//     while (curr)
//     {
//         if (!isleaf(curr))
//             tmp.push_back(curr->data);
//         if (curr->right)
//             curr = curr->right;
//         else
//             curr = curr->left;
//     }
//     for (int i = tmp.size() - 1; i >= 0; i--)
//     {
//         res.push_back(tmp[i]);
//     }
// }
// void addLeaves(node *root, vector<int> &res)
// {
//     if (isleaf(root))
//     {
//         res.push_back(root->data);
//         return;
//     }
//     if (root->left)
//         addLeaves(root->left, res);
//     if (root->right)
//         addLeaves(root->right, res);
// }
// vector<int> printBoundary(node *root)
// {
//     vector<int> res;
//     if (root == nullptr)
//     {
//         return res;
//     }
//     if (!isleaf(root))
//         res.push_back(root->data);
//     addLeftBoundary(root, res);
//     addLeaves(root, res);
//     addRightBoundary(root, res);
//     return res;
// }
// node *newNode(int data)
// {
//     node *n = new node;
//     n->data = data;
//     n->right = n->left = nullptr;
//     return n;
// }
// int main()
// {
//     struct node *root = newNode(1);
//     root->left = newNode(2);
//     root->left->left = newNode(3);
//     root->left->left->right = newNode(4);
//     root->left->left->right->left = newNode(5);
//     root->left->left->right->right = newNode(6);
//     root->right = newNode(7);
//     root->right->right = newNode(8);
//     root->right->right->left = newNode(9);
//     root->right->right->left->left = newNode(10);
//     root->right->right->left->right = newNode(11);
//     vector<int> boundaryTraversal;
//     boundaryTraversal = printBoundary(root);
//     cout << "The Boundary Traversal is : ";
//     for (int i = 0; i < boundaryTraversal.size(); i++)
//     {
//         cout << boundaryTraversal[i] << " ";
//     }
//     return 0;
// }

////word break solution in optimzied way also
// // Recurrsive Solution
// class Solution
// {
// public:
//     int wordBreak(int n, string s, vector<string> &dictionary)
//     {
//         string a = s;
//         if (a == "")
//         {
//             return 1;
//         }
//         for (auto it : dictionary)
//         {
//             if (it == a.substr(0, it.size()))
//             {
//                 a = a.substr(it.size());
//                 int ans = wordBreak(n, a, dictionary);
//                 if (ans == 0)
//                 {
//                     a = s;
//                 }
//                 else
//                 {
//                     return 1;
//                 }
//             }
//         }
//         if (a == s)
//         {
//             return 0;
//         }
//     }
// };
// // Optimised Solution
// class Solution
// {
// public:
//     int solve(int index, string s, vector<string> &dictionary, vector<int> &dp)
//     {
//         if (index >= s.size())
//         {
//             return 1;
//         }
//         if (dp[index] != 0)
//         {
//             return dp[index];
//         }
//         int ans = 0;
//         for (auto it : dictionary)
//         {
//             if (it == s.substr(index, it.size()))
//             {
//                 ans = solve(index + it.size(), s, dictionary, dp);
//                 dp[index] = max(ans, dp[index]);
//             }
//         }
//         return dp[index];
//     }
//     int wordBreak(int n, string s, vector<string> &dictionary)
//     {
//         // code here
//         vector<int> dp(s.size(), 0);
//         return solve(0, s, dictionary, dp);
//     }
// };
// // Further Optimisation
// class Solution
// {
// public:
//     int solveTab(string s, vector<string> &dictionary)
//     {
//         vector<int> dp(s.size() + 1, 0);
//         dp[s.size()] = 1;
//         int ans = 0;
//         for (int i = dp.size() - 1; i >= 0; i--)
//         {
//             for (auto it : dictionary)
//             {
//                 if (it == s.substr(i, it.size()))
//                 {
//                     if (i + it.size() > s.size())
//                     {
//                         continue;
//                     }
//                     ans = dp[i + it.size()];
//                     dp[i] = max(ans, dp[i]);
//                 }
//             }
//         }
//         return dp[0];
//     }
//     int wordBreak(int n, string s, vector<string> &dictionary)
//     {
//         // code here
//         //  vector<int>dp(s.size(),0);
//         return solveTab(s, dictionary);
//     }
// };

// struct node
// {
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// void zigzagTraversal(node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     stack<node *> s1;
// }
// int main()
// {
//     node *root = new node(5);
//     root->left = new node(3);
//     root->right = new node(7);
//     root->left->left = new node(2);
//     root->left->right = new node(4);
//     root->right->left = new node(6);
//     root->right->right = new node(8);
//     return 0;
// }

//////check the tree is identical or not
// struct node
// {
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// bool checkIdentical(node *root1, node *root2)
// {
//     if (root1 == nullptr && root2 == nullptr)
//     {
//         return true;
//     }
//     if (root1->data != root2->data)
//     {
//         return false;
//     }
//     if (!checkIdentical(root1->left, root2->left))
//     {
//         return false;
//     }
//     if (!checkIdentical(root1->right, root2->right))
//     {
//         return false;
//     }
//     return true;
// }
// int main()
// {
//     node *root1 = new node(5);
//     root1->left = new node(3);
//     root1->right = new node(7);
//     root1->left->left = new node(2);
//     root1->left->right = new node(4);
//     root1->right->left = new node(6);
//     root1->right->right = new node(8);
//     node *root2 = new node(5);
//     root2->left = new node(3);
//     root2->right = new node(7);
//     root2->left->left = new node(2);
//     root2->left->right = new node(4);
//     root2->right->left = new node(6);
//     root2->right->right = new node(8);
//     cout << checkIdentical(root1, root2);
//     return 0;
// }

//////find the Maximum sum Path
// struct node
// {
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// int solve(Node *root, int &maxx)
// {
//     if (root == nullptr)
//     {
//         return 0;
//     }
//     int lh = max(0, solve(root->left, maxx));
//     int rh = max(0, solve(root->right, maxx));
//     int val = root->data;
//     maxx = max(maxx, (lh + rh) + val);
//     return max(lh, rh) + val;
// }
// int findPathSum(Node *root)
// {
//     int maxx = INT_MIN;
//     solve(root, maxx);
//     return maxx;
// }

////check if a given array represents a binary heap
// bool isHeap(int arr[], int i, int n)
// {
//     for (int i = 0; i <= (n - 2) / 2; i++)
//     {
//         if (arr[i * 2 + 1] > arr[i])
//         {
//             return false;
//         }
//         if (arr[i * 2 + 2] > arr[i] && i * 2 + 2 > n)
//         {
//             return false;
//         }
//     }
//     return true;
// }

///// diameter of the bst
// struct node
// {
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// int height(node *root)
// {
//     if (root == nullptr)
//     {
//         return 0;
//     }
//     int lh = height(root->left);
//     int rh = height(root->right);
//     return max(lh, rh) + 1;
// }
// int diameter(node *root, int &ans)
// {
//     if (root == nullptr)
//     {
//         return 0;
//     }
//     int dl = height(root->left);
//     int dr = height(root->right);
//     ans = max(ans, dl + dr);
//     return ans;
// }
// int main()
// {
//     node *root = new node(5);
//     root->left = new node(3);
//     root->right = new node(7);
//     root->left->left = new node(2);
//     root->left->right = new node(4);
//     root->right->left = new node(6);
//     root->right->right = new node(8);
//     int ans = 0;
//     diameter(root, ans);
//     cout << ans << endl;
//     return 0;
// }

////flatten the bst tree into right skew tree
// struct node
// {
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// void print(node *parent)
// {
//     node *curr = parent;
//     while (curr != nullptr)
//     {
//         cout << curr->data << " ", curr = curr->right;
//     }
// }
// void inorder(vector<int> &traversal, node *parent)
// {
//     if (parent == nullptr)
//     {
//         return;
//     }
//     inorder(traversal, parent->left);
//     traversal.push_back(parent->data);
//     inorder(traversal, parent->right);
// }
// void form(int pos, vector<int> &traversal, node *&prev)
// {
//     if (pos == traversal.size())
//     {
//         return;
//     }
//     prev->right = new node(traversal[pos]);
//     prev->left = nullptr;
//     prev = prev->right;
//     form(pos + 1, traversal, prev);
// }
// node *flatten(node *parent)
// {
//     node *dummy = new node(-1);
//     node *prev = dummy;
//     vector<int> traversal;
//     inorder(traversal, parent);
//     form(0, traversal, prev);
//     prev->left = nullptr;
//     // cout << prev->right->data << endl;
//     prev->right = nullptr;
//     node *ret = dummy->right;
//     delete dummy;
//     return ret;
// }
// int main()
// {
//     node *root = new node(5);
//     root->left = new node(3);
//     root->right = new node(7);
//     root->left->left = new node(2);
//     root->left->right = new node(4);
//     root->right->left = new node(6);
//     root->right->right = new node(8);
//     print(flatten(root));
//     return 0;
// }

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