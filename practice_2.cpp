#include <bits/stdc++.h>
using namespace std;

///////check if frequency of all characters can become same by one removal
// #define M 26
// int getIdx(char ch)
// {
//     return (ch - 'a');
// }
// bool allSame(int freq[], int N)
// {
//     int same;
//     int i;
//     while (i = 0; i < N; i++)
//     {
//         if (freq[i] > 0)
//         {
//             same = freq[i];
//             break;
//         }
//     }
//     for (int j = i + 1; j < N; j++)
//     {
//         if (freq[j] > 0 && freq[j] != same)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// bool possibleSameChar(string str)
// {
//     int l = str.length();
//     int freq[M] = {0};
//     for (int i = 0; i < l; i++)
//     {
//         freq[getIdx(str[i])]++;
//     }
//     if (allSame(freq, M))
//     {
//         return true;
//     }
//     for (char c = 'a'; c <= 'z'; c++)
//     {
//         int i = getIdx(c);
//         if (freq[i] > 0)
//         {
//             freq[i]--;
//             if (allSame(freq, M))
//             {
//                 return true;
//             }
//             freq[i]++;
//         }
//     }
//     return false;
// }

/////////Maximum Index
// class Pair
// {
// public:
//     int value;
//     int index;
//     Pair(int value, int index) : value(value), index(index) {}
//     bool operator<(const Pair &p) const
//     {
//         return this->value < p.value;
//     }
// };
// class Solution
// {
// public:
//     int maxIndexDiff(vector<int> &arr, int n)
//     {
//         vector<Pair> list;
//         for (int i = 0; i < n; i++)
//         {
//             list.push_back(Pair(arr[i], i));
//         }
//         sort(list.begin(), list.end());
//         for (auto it : list)
//         {
//             cout << it.index << " " << it.value << endl;
//         }
//         int ls = list.size();
//         int maxi_j = list[ls - 1].index;
//         int maxi = 0;
//         for (int i = ls - 2; i >= 0; i--)
//         {
//             if (list[i].value < maxi_j)
//             {
//                 maxi = max(maxi, maxi_j - list[i].value);
//             }
//             maxi_j = max(maxi_j, list[i].index);
//         }
//         return maxi;
//     }
// };
// int main()
// {
//     vector<int> a{34, 8, 10, 3, 2, 80, 30, 33, 1};
//     Solution s;
//     s.maxIndexDiff(a, 9);
//     return 0;
// }

/////////maximum index size question
// class Pair
// {
// public:
//     int value;
//     int index;
//     Pair(int value, int index) : value(value), index(index) {}
//     bool operator<(const Pair &p) const
//     {
//         return this->value < p.value;
//     }
// };
// class Solution
// {
// public:
//     int maxIndexDiff(int a[], int n)
//     {
//         // Your code here
//         vector<Pair> list;
//         for (int i = 0; i < n; ++i)
//             list.push_back(Pair(a[i], i));
//         sort(list.begin(), list.end());
//         int ls = list.size();
//         int maxi_j = list[ls - 1].index;
//         int maxi = 0;
//         for (int i = ls - 2; i >= 0; --i)
//         {
//             if (list[i].index < maxi_j)
//             {
//                 maxi = max(maxi, maxi_j - list[i].index);
//             }
//             maxi_j = max(maxi_j, list[i].index);
//         }
//         return maxi;
//     }
// };

////////Given an array arr[], find the maximum j – i such that arr[i] <= arr[j]
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
//     t->right = t->left = nullptr;
//     return t;
// };

// int maxIndexDiff(vector<int> &arr, int n)
// {
//     int maxd = -1;
//     int i, j;
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = n - 1; j > i; j--)
//         {
//             if (arr[j] >= a[i] && maxd < (j - i))
//             {
//                 maxd = j - i;
//             }
//         }
//     }
//     return maxd;
// };

/////////check the tree is complete binary tree or not
// bool checkCompleteTree(Node *root)
// {
//     if (root->left == nullptr && root->right != nullptr)
//     {
//         return false;
//     }
//     if (!checkCompleteTree(root->left))
//     {
//         return false;
//     }
//     if (!checkCompleteTree(root->right))
//     {
//         return false;
//     }
//     return true;
// }
// int main()
// {
//     Node *root = newNode(1);
//     root->right = newNode(2);
//     root->left = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);
//     root->right->left = newNode(6);
//     cout << checkCompleteTree(root) << endl;
//     return 0;
// }

////////count the number of nodes in a binary tree
// struct node
// {
//     int data;
//     node *right;
//     node *left;
// };
// node *newNode(int data)
// {
//     node *t = new node;
//     t->data = data;
//     t->right = t->left = nullptr;
//     return t;
// }
// //////always remember that it is used only when tree is complete binary tree
// void countCompleteTree(node *root, int &count)
// {
//     if (curr == nullptr)
//     {
//         return;
//     }
//     count++;
//     countCompleteTree(root->left, count);
//     countCompleteTree(root->right, count);
// }
// int main()
// {
//     return 0;
// }

////////minimum time taken to burn a binary tree from a node
// struct node
// {
//     int data;
//     node *right;
//     node *left;
// };
// node *newNode(int data)
// {
//     node *t = new node;
//     t->data = data;
//     t->right = t->left = nullptr;
//     return t;
// }
// void markParent(node *root, unordered_map<node *, node *> &parent_track, node *target)
// {
//     queue<node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         auto t = q.front();
//         q.pop();
//         if (t->left)
//         {
//             q.push(t->left);
//             parent_track[t->left] = t;
//         }
//         if (t->right)
//         {
//             q.push(t->right);
//             parent_track[t->right] = t;
//         }
//     }
// }
// int miniTimeTaken(node *root, node *target)
// {
//     queue<node *> q;
//     unordered_map<node *, bool> visited;
//     unordered_map<node *, node *> parent_track;
//     markParent(root, parent_track, target);
//     q.push(target);
//     int curr = 0;
//     while (!q.empty())
//     {
//         int size = q.size();
//         for (int i = 0; i < size; i++)
//         {
//             auto t = q.front();
//             q.pop();
//             if (t->left && !visited[t->left])
//             {
//                 visited[t->left] = true;
//                 q.push(t->left);
//             }
//             if (t->right && !visited[t->right])
//             {
//                 visited[t->right] = true;
//                 q.push(t->right);
//             }
//             if (parent_track[t] && !visited[parent_track[t]])
//             {
//                 visited[parent_track[t]] = true;
//                 q.push(parent_track[t]);
//             }
//         }
//         ++curr;
//     }
//     return curr;
// }
// int main()
// {
//     node *root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->right->left = newNode(5);
//     root->right->right = newNode(6);
//     root->left->left->right = newNode(7);
//     cout << miniTimeTaken(root, root->left) << endl;
//     return 0;
// }

//////largest number formed from an array
// class solution
// {
// public:
//     static bool compare(string a, string b)
//     {
//         return a + b > b + a;
//     }
//     void printLargest(int n, vector<string> &arr)
//     {
//         sort(arr.begin(), arr.end(), compare);
//         string ans = "";
//         for (auto i : arr)
//         {
//             cout << i << ",";
//         }
//         cout << endl;
//         return;
//     }
// };
// int main()
// {
//     vector<string> arr{"3", "30", "34", "5", "9"};
//     solution s;
//     s.printLargest(5, arr);
//     return 0;
// }

///////print nodes at distance k in a binary tree
// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), right(nullptr), left(nullptr) {}
// };
// class Solution
// {
// public:
//     void marksParents(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parent_track, TreeNode *target)
//     {
//         queue<TreeNode *> q;
//         q.push(root);
//         while (!q.empty())
//         {
//             auto t = q.front();
//             q.pop();
//             if (t->left)
//             {
//                 parent_track[t->left] = t;
//                 q.push(t->left);
//             }
//             if (t->right)
//             {
//                 parent_track[t->right] = t;
//                 q.push(t->right);
//             }
//         }
//     }
//     vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
//     {
//         unordered_map<TreeNode *, TreeNode *> parent_track;
//         marksParents(root, parent_track, target);
//         unordered_map<TreeNode *, bool> visited;
//         queue<TreeNode *> q;
//         queue.push(target);
//         int curr_level = 0;
//         while (!q.empty())
//         {
//             int size = q.size();
//             if (curr_level++ == k)
//             {
//                 break;
//             }
//             for (int i = 0; i < size; i++)
//             {
//                 TreeNode *current = q.front();
//                 q.pop();
//                 if (current->left && !visited[current->left])
//                 {
//                     q.push(current->left);
//                     visited[current->left] = true;
//                 }
//                 if (current->right && !visited[current->right])
//                 {
//                     q.push(current->right);
//                     visited[current->right] = true;
//                 }
//                 if (parent_track[current] && !visited[parent_track[current]])
//                 {
//                     q.push(parent_track[current]);
//                     visited[parent_track[current]] = true;
//                 }
//             }
//         }
//         vector<int> result;
//         while (!q.empty())
//         {
//             TreeNode *current = q.front();
//             q.pop();
//             result.push_back(current->val);
//         }
//         return result;
//     }
// };

////////check for children sum property in a binary tree
// struct node
// {
//     int data;
//     node *right;
//     node *left;
// };
// void reorder(node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     int child = 0;
//     if (root->left)
//     {
//         child += root->left->data;
//     }
//     if (root->right)
//     {
//         child += root->right->data;
//     }
//     if (child < root->data)
//     {
//         if (root->left)
//             root->left->data = root->data;
//         else if (root->right)
//             root->right->data = root->data;
//     }
//     reorder(root->left);
//     reorder(root->right);
//     int tot = 0;
//     if (root->left)
//         tot += root->left->data;
//     if (root->right)
//         tot += root->right->data;
//     if (root->left || root->right)
//         root->data = tot;
// }
// void ChangeTree(node *root)
// {
//     reorder(root);
// }
// int main()
// {
//     return 0;
// }

//////maximum width of a binary tree
// struct Node
// {
//     int data;
//     Node *right;
//     Node *left;
// };
// int maximumWidth(Node *root)
// {
//     if (root == NULL)
//         return 0;
//     int ans = -1;
//     queue<pair<node *, int>> q;
//     q.push({root, 0});
//     while (!q.empty())
//     {
//         int s = q.size();
//         int currMin = q.front().second;
//         int leftmost, rightmost;
//         for (int i = 0; i < s; ++i)
//         {
//             int cur_id = q.front().second - currMin;
//             Node *t = q.front().first;
//             q.pop();
//             if (i == 0)
//                 leftmost = cur_id;
//             if (i == s - 1)
//                 rightmost = cur_id;
//             if (t->left)
//             {
//                 q.push({t->left, curr_id * 2 + 1});
//             }
//             if (t->right)
//             {
//                 q.push({t->right, curr_id * 2 + 2});
//             }
//         }
//         ans = max(ans, rightmost - leftmost + 1);
//     }
//     return ans;
// }

////////Least Common Ancestor for given nodes
// struct node
// {
//     int data;
//     node *right;
//     node *left;
// };
// node *leastCommonAncestor(node *root, int p, int q)
// {
//     if (root == nullptr || root->data == p || root->data == q)
//     {
//         return root;
//     }
//     node *lcl = leastCommonAncestor(root->left, p, q);
//     node *lcr = leastCommonAncestor(root->right, p, q);
//     if (lcl == nullptr)
//     {
//         return lcr;
//     }
//     else if (lcr == nullptr)
//     {
//         return lcl;
//     }
//     else
//     {
//         return root;
//     }
// }

///////play with OR function
// vector<int> palyWith(vector<int> a, int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         a[i] = a[i] | a[i + 1];
//     }
//     return a;
// }

//////play with OR and apply the or bitwise
// int main()
// {
//     vector<int> v{10, 11, 1, 2, 3};
//     for (int i = 0; i < v.size() - 1; i++)
//     {
//         v[i] = v[i] | v[i + 1];
//     }
//     for (auto i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

///////least common ancestor for two given nodes
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
// node *LeastCommon(node *root, int p, int q)
// {
//     if (root == nullptr || root->data == p || root->data == q)
//         return root;
//     node *lcl = LeastCommon(root->left, p, q);
//     node *lcr = LeastCommon(root->right, p, q);
//     if (lcl == nullptr)
//     {
//         return lcr;
//     }
//     else if (lcr == nullptr)
//     {
//         return lcl;
//     }
//     else
//     {
//         return root;
//     }
// }
// int main()
// {
//     node *root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);
//     root->right->left = newNode(6);
//     root->right->right = newNode(7);
//     cout << LeastCommon(root, 5, 6)->data << endl;
//     return 0;
// }

//////find all subsequence of the string
// void sub(string s, int i, string &f)
// {
//     //// this function will print all the subsequence
//     //// of the string
//     if (i == s.length())
//         cout << f << endl;
//     return;
//     f = f + s[i];
//     sub(s, i + 1, f);
//     f.pop_back();
//     sub(s, i + 1, f);
// }

///////print root to node path in a binary tree
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
//     n->right = n->left = nullptr;
//     return n;
// }
// bool PathFromRoot(node *root, int v, vector<int> &res)
// {
//     if (root == nullptr)
//         return false;
//     res.push_back(root->data);
//     if (root->data == v)
//     {
//         return true;
//     }
//     if (PathFromRoot(root->left, v, res) || PathFromRoot(root->right, v, res))
//     {
//         return true;
//     }
//     res.pop_back();
//     return false;
// }
// int main()
// {
//     node *root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);
//     root->left->right->left = newNode(6);
//     root->left->right->right = newNode(7);
//     vector<int> res;
//     PathFromRoot(root, 7, res);
//     for (auto i : res)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

//////check symmetric binary tree
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
// bool checkSymmetric(node *n1, node *n2)
// {
//     if (n1 == nullptr || n2 == nullptr)
//     {
//         return n1 == n2;
//     }
//     return (n1->data == n2->data) && checkSymmetric(n1->right, n2->left) && checkSymmetric(n1->left, n2->right);
// }
// bool symmetric(node *root)
// {
//     if (root == nullptr)
//         return true;
//     return checkSymmetric(root->left, root->right);
// }
// int main()
// {
//     node *n = newNode(1);
//     n->left = newNode(2);
//     n->right = newNode(2);
//     n->left->left = newNode(3);
//     n->left->right = newNode(4);
//     n->right->left = newNode(1);
//     n->right->right = newNode(3);
//     cout << symmetric(n) << endl;
//     return 0;
// }

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