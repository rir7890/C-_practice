#include <bits/stdc++.h>
using namespace std;

// int countLessMid(vector<int> &row, int mid)
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
//     int r = A.size();
//     int c = A[0].size();
//     int low = INT_MAX;
//     int high = INT_MIN;
//     for (int i = 0; i < r; i++)
//     {
//         if (A[i][0] < low)
//         {
//             low = A[i][0];
//         }
//         if (A[i][c - 1] > high)
//         {
//             high = A[i][c - 1];
//         }
//     }
//     while (low <= high)
//     {
//         int mid = (low + high) >> 1;
//         int cnt = 0;
//         for (int i = 0; i < r; i++)
//         {
//             cnt += countLessMid(A[i], mid);
//         }
//         if (cnt <= (r * c) / 2)
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
//     int row = 3, col = 3;
//     vector<vector<int>> arr = {{1, 3, 8}, {2, 3, 4}, {1, 2, 5}};
//     cout << findMedian(arr) << endl;
//     return 0;
// }

// int checkAnagram(string s)
// {
//     int freq[26] = {0};
//     for (auto c : s)
//     {
//         if (c >= 'A' and c <= 'Z')
//         {
//             freq[c - 'A']++;
//         }
//         else
//         {
//             freq[c - 'a']++;
//         }
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (!freq[i])
//             return false;
//     }
//     return true;
// }

// vector<int> peakElements(vector<vector<int>> &a, int N, int M)
// {
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             if (i - 1 >= 0 && a[i][j] < a[i - 1][j] || j - 1 >= 0 && a[i][j] < a[i][j - 1] || i + 1 < N && a[i][j] < a[i + 1][j] || j + 1 < M && a[i][j] < a[i][j + 1])
//             {
//                 continue;
//             }
//             else
//             {
//                 return {i, j};
//             }
//         }
//     }
//     return {-1, -1};
// }
// int main()
// {
//     vector<vector<int>> a{{10, 7}, {11, 17}};
//     int row = a.size();
//     int col = a[0].size();
//     vector<int> ans = peakElements(a, row, col);
//     cout << ans[0] << " " << ans[1] << " " << endl;
//     return 0;
// }

// int lowerBound(vector<int> arr, int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     int ans = n;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (a[mid] >= x)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }
// int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
// {
//     int cnt_max = 0;
//     int index = -1;
//     for (int i = 0; i < n; i++)
//     {
//         int cnt_ones = m - lowerBound(matrix[i], m, 1);
//         if (cnt_ones > cnt_max)
//         {
//             cnt_max = cnt_ones;
//             index = i;
//         }
//     }
//     return index;
// }

// int lengthOfOnes(vector<int> a, int low, int high)
// {
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (a[mid] == 1 and a[mid - 1] == 0)
//         {
//             return mid;
//         }
//         else if (a[mid] == 1 and a[mid - 1] == 1)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return 0;
// }
// int rowWithMax1s(vector<vector<int>> &a, int n, int m)
// {
//     int ans = -1;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int l = m - lengthOfOnes(a[i], 0, m);
//         if (l == 0)
//             continue;
//         if (count < l)
//         {
//             count = l;
//             ans = i;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<vector<int>> a{{0, 0, 0}, {0, 0, 1}, {0, 0, 0}};
//     cout << rowWithMax1s(a, 3, 3) << endl;
//     return 0;
// }

// int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
// {
//     int cnt_max = 0;
//     int index = -1;
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         int cnt_one = 0;
//         for (int j = 0; j < matrix[0].size(); j++)
//         {
//             if (matrix[i][j] == 1)
//             {
//                 cnt_one++;
//             }
//         }
//         if (cnt_one > cnt_max)
//         {
//             cnt_max = cnt_one;
//             index = i;
//         }
//     }
//     return index;
// }

// int countGroups(int position, int previous_sum, int length, string &str)
// {
//     if (position == length)
//     {
//         return 1;
//     }
//     int sum = 0;
//     int res = 0;
//     for (int i = 0; i < length; i++)
//     {
//         sum += (str[i] - '0');
//         if (sum >= previous_sum)
//         {
//             res += countGroups(i + 1, sum, length, str);
//         }
//     }
//     return res;
// }
// int answer(string str)
// {
//     int n = str.length();
//     return countGroups(0, 0, n, str);
// }

// long long findNthNumber(int n, int k)
// {
//     long long num = 0;
//     int curr = 1;
//     while (curr < n)
//     {
//         num++;
//         if (__builtin_popcount(num) <= k)
//         {
//             curr++;
//         }
//     }
//     return num;
// }
// int main()
// {
//     cout << findNthNumber(5, 1);
//     return 0;
// }

// int f(vector<int> &arr, int i, int j, vector<vector<int>> &dp)
// {
//     if (i == j)
//     {
//         return 0;
//     }
//     if (dp[i][j] != -1)
//     {
//         return dp[i][j];
//     }
//     dp[i][j] = INT_MAX;
//     for (int k = i; k < j; k++)
//     {
//         dp[i][j] = min(dp[i][j], f(arr, i, k, dp) + f(arr, k + 1, j, dp) + arr[i - 1] * arr[k] * arr[j]);
//     }
//     return dp[i][j];
// }
// int matrixMultiplication(vector<int> &arr, int N)
// {
//     vector<vector<int>> dp(N, vector<int>(N, -1));
//     int i = 1;
//     int j = N - 1;
//     return f(arr, i, j, dp);
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4};
//     int n = arr.size();
//     cout << matrixMultiplication(arr, n) << endl;
//     return 0;
// }

// class Graph
// {
// public:
//     int V;
//     list<int> *adj;
//     bool *visited;
//     bool isCyclicUtil(int v, bool visited[], int parent);
//     Graph(int V);
//     void addEdge(int v, int w);
//     bool Iscyclic();
// };
// Graph::Graph(int V)
// {
//     this->V = V;
//     adj = new list<int>[this->V];
//     visited = new bool[this->V];
// }
// void Graph::addEdge(int v, int w)
// {
//     adj[v].push_back(w);
//     adj[w].push_back(v);
// }
// bool Graph::isCyclicUtil(int v, bool visited[], int parent)
// {
//     visited[v] = true;
//     for (auto i = adj[v].begin(); i != adj[v].end(); i++)
//     {
//         if (!visited[*i])
//         {
//             if (isCyclicUtil(*i, visited, v))
//             {
//                 return true;
//             }
//         }
//         else if (*i != parent)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// bool Graph::Iscyclic()
// {
//     for (int i = 0; i < this->V; i++)
//     {
//         visited[i] = false;
//     }
//     for (int i = 0; i < this->V; i++)
//     {
//         if (!visited[i])
//         {
//             if (isCyclicUtil(i, visited, -1))
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int isTree(int n, int m, vector<vector<int>> &adj)
// {
//     Graph g(n);
//     for (int i = 0; i < m; i++)
//     {
//         g.addEdge(adj[i][0], adj[i][1]);
//     }
//     if (g.Iscyclic())
//     {
//         return false;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (!g.visited[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     vector<vector<int>> adj = {{0, 1}, {1, 2}, {2, 0}};
//     int n = 4;
//     int m = 3;
//     cout << isTree(n, m, adj) << endl;
//     return 0;
// }
// class Solution
// {
// public:
//     bool dfs(int node, int par, vector<int> adj[], vector<int> &vis)
//     {
//         vis[node] = 1;
//         for (auto it : adj[node])
//         {
//             if (!vis[it])
//             {
//                 if (!dfs(it, node, adj, vis))
//                     return false;
//             }
//             else if (it != par)
//                 return false;
//         }
//         return true;
//     }
//     int isTree(int n, int m, vector<vector<int>> &edges)
//     {
//         vector<int> adj[n];
//         for (auto it : edges)
//         {
//             adj[it[0]].push_back(it[1]);
//             adj[it[1]].push_back(it[0]);
//         }
//         vector<int> vis(n, 0);
//         bool fg = dfs(0, -1, adj, vis);
//         for (int i = 0; i < n; i++)
//         {
//             if (!vis[i])
//                 return false;
//         }
//         return fg;
//     }
// };

// struct Node
// {
//     int key;
//     Node *left, *right;
// };
// Node *newNode(int key)
// {
//     Node *t = new Node;
//     t->key = key;
//     t->left = t->right = nullptr;
//     return t;
// }
// int distributeCandy(Node *root, int &ans)
// {
//     if (!root)
//         return 0;
//     int l = distributeCandy(root->left, ans);
//     int r = distributeCandy(root->right, ans);
//     ans += abs(l) + abs(r);
//     return root->key + l + r - 1;
// }
// int answer(Node *root)
// {
//     int ans = 0;
//     distributeCandy(root, ans);
//     return ans;
// }

// int kthelement(vector<int> &a1, vector<int> &a2, int m, int n, int k)
// {
//     if (m > n)
//     {
//         return kthelement(a2, a1, n, m, k);
//     }
//     int low = max(0, k - m);
//     int high = min(k, n);
//     while (low <= high)
//     {
//         int cut1 = (low + high) >> 1;
//         int cut2 = k - cut1;
//         int l1 = cut1 == 0 ? INT_MIN : a1[cut1 - 1];
//         int l2 = cut2 == 0 ? INT_MIN : a2[cut2 - 1];
//         int r1 = cut1 == m ? INT_MAX : a1[cut1];
//         int r2 = cut2 == n ? INT_MAX : a2[cut2];
//         if (l1 <= r2 && l2 <= r1)
//         {
//             return max(l1, l2);
//         }
//         else if (l1 > r2)
//         {
//             high = cut1 - 1;
//         }
//         else
//         {
//             low = cut1 + 1;
//         }
//     }
//     return 1;
// }

// int numbeSequence(int m, int n)
// {
//     if (m < n)
//     {
//         return 0;
//     }
//     if (n == 0)
//     {
//         return 0;
//     }
//     return numbeSequence(m / 2, n - 1) + numbeSequence(m - 1, n);
// }

// int solve(int ind, int n, int total, vector<int> &cost, vector<vector<int>> &dp)
// {
//     if (total <= 0)
//     {
//         return 0;
//     }
//     if (ind == n)
//     {
//         return 0;
//     }
//     if (dp[ind][total] != -1)
//     {
//         return dp[ind][total];
//     }
//     int notPick = solve(ind + 1, n, total, cost, dp);
//     int pick = 0;
//     if (cost[ind] <= total)
//     {
//         pick = 1 + solve(ind + 1, n, (total - cost[ind]) + (0.9 * cost[ind]), cost, dp);
//     }
//     return dp[ind][total] = max(pick, notPick);
// }
// int max_courses(int n, int total, vector<int> &cost)
// {
//     vector<vector<int>> dp(n, vector<int>(total + 1, -1));
//     return solve(0, n, total, cost, dp);
// }

// vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N)
// {
//     vector<int> ans;
//     unordered_map<string, int> um;
//     for (int i = 0; i < M; i++)
//     {
//         string s = "";
//         for (int j = 0; j < N; j++)
//         {
//             s += to_string(matrix[i][j]);
//         }
//         if (um.find(s) != um.end())
//         {
//             ans.push_back(i);
//         }
//         else
//         {
//             um[s] = i;
//         }
//     }
//     if (ans.size() == 0)
//     {
//         return {-1};
//     }
//     return ans;
// }
// int main()
// {
//     vector<vector<int>> m{{1, 0, 0}, {1, 0, 0}, {0, 0, 0}, {0, 0, 0}};
//     int r = 4;
//     int c = 3;
//     for (const auto &v : repeatedRows(m, r, c))
//     {
//         std::cout << v << "\n";
//     }
//     return 0;
// }

// struct Node
// {
//     int data;
//     Node *next;
//     Node(int x) : data(x), next(NULL) {}
// };
// class LinkedLists
// {
// public:
//     Node *head;
//     Node *sorted;
//     void push(int val)
//     {
//         Node *newnode = new Node(val);
//         newnode->next = head;
//         head = newnode;
//     }
//     void printList(Node *head)
//     {
//         while (head != NULL)
//         {
//             std::cout << head->data << " ";
//             head = head->next;
//         }
//     }
//     void insertSort(Node *headref)
//     {
//         sorted = NULL;
//         Node *current = headref;
//         while (current != NULL)
//         {
//             Node *next = current->next;
//             sortedInsert(current);
//             current = next;
//         }
//         head = sorted;
//     }
//     void sortedInsert(Node *newnode)
//     {
//         if (sorted == NULL || newnode->data <= sorted->data)
//         {
//             newnode->next = sorted;
//             sorted = newnode;
//         }
//         else
//         {
//             Node *current = sorted;
//             while (current->next && current->next->data < newnode->data)
//             {
//                 current = current->next;
//             }
//             newnode->next = current->next;
//             current->next = newnode;
//         }
//     }
// };

// queue<int> modifyQueue(queue<int> &q, int k)
// {
//     stack<int> st;
//     int n = q.size();
//     for (int i = 0; i < k; i++)
//     {
//         st.push(q.front());
//         q.pop();
//     }
//     while (!st.empty())
//     {
//         q.push(st.top());
//         st.pop();
//     }
//     for (int i = k; i < n; i++)
//     {
//         int x = q.front();
//         q.pop();
//         q.push(x);
//     }
//     return q;
// }
// int main()
// {
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     queue<int> q1 = modifyQueue(q, 3);
//     q.swap(q1);
//     while (!q.empty())
//     {
//         std::cout << q.front() << "\n";
//         q.pop();
//     }
//     return 0;
// }

// float medianOfTwoSorted(vector<int> &a1, vector<int> &a2)
// {
//     int i = 0;
//     int j = 0;
//     vector<int> ans;
//     while (i < a1.size() && j < a2.size())
//     {
//         if (a1[i] <= a2[j])
//         {
//             ans.push_back(a1[i++]);
//         }
//         else
//         {
//             ans.push_back(a2[j++]);
//         }
//     }
//     while (i < a1.size())
//     {
//         ans.push_back(a1[i++]);
//     }
//     while (j < a2.size())
//     {
//         ans.push_back(a2[j++]);
//     }
//     int sum = 0;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         sum += ans[i];
//     }
//     // for (auto x : ans)
//     // {
//     //     cout << x << endl;
//     // }
//     // cout << float(sum) / float(ans.size()) << endl;
//     return float(sum) / float(ans.size());
// }
// int main()
// {
//     vector<int> a1{2, 4, 6};
//     vector<int> a2{1, 3, 5};
//     cout << medianOfTwoSorted(a1, a2) << endl;
//     return 0;
// }

// string removeKDigits(string S, int K)
// {
//     stack<char> st;
//     if (S.length() <= K)
//     {
//         return "0";
//     }
//     for (int i = 0; i < S.length(); i++)
//     {
//         if (st.size() > 0 && st.top() > S[i] && K > 0)
//         {
//             while (st.size() > 0 && st.top() > S[i] && K > 0)
//             {
//                 st.pop();
//                 K--;
//             }
//         }
//         if (st.size() == 0)
//         {
//             if (S[i] != '0')
//             {
//                 st.push(S[i]);
//             }
//             else
//             {
//                 st.push(S[i]);
//             }
//         }
//     }
//     while (K > 0 && st.size() > 0)
//     {
//         st.pop();
//         K--;
//     }
//     string res;
//     while (st.size() > 0)
//     {
//         res.push_back(st.top());
//         st.pop();
//     }
//     reverse(res.begin(), res.end());
//     if (res.size() == 0)
//         return "0";
//     return res;
// }

// string removeKdigits(string S, int K)
// {
//     stack<char> s;
//     if ((S[0] - '0') == 0)
//     {
//         return "zero contain at the start of the string";
//     }
//     for (int i = 0; i < S.length(); i++)
//     {
//         if (s.empty())
//         {
//             s.push(S[i]);
//         }
//         if ((S[i] - '0') == 0 && !s.empty())
//         {
//             s.pop();
//             K--;
//             if (K == 0)
//             {
//                 break;
//             }
//         }
//         else if ((S[i] - '0') == 0 && s.empty())
//         {
//             continue;
//         }
//         else if ((S[i] - '0') > s.top())
//         {
//             K--;
//             if (K == 0)
//             {
//                 break;
//             }
//         }
//     }
//     string ans = "";
//     while (!s.empty())
//     {
//         ans = s.top() + ans;
//         s.pop();
//     }
//     return ans;
// }
// int main()
// {
//     string s = "1002991";
//     cout << removeKdigits(s, 3) << endl;
//     return 0;
// }

// int sumofSubArray(vector<int> &a, int n, int k)
// {
//     unordered_map<int, int> um;
//     int mod_arr[n];
//     int sum = 0;
//     int max_len = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//         mod_arr[i] = ((sum % k) + k) % k;
//         if (mod_arr[i] == 0)
//         {
//             max_len = i + 1;
//         }
//         else if (um.find(mod_arr[i]) == um.end())
//         {
//             um[mod_arr[i]] = i;
//         }
//         else
//         {
//             if (max_len < (i - um[mod_arr[i]]))
//             {
//                 max_len = i - um[mod_arr[i]];
//             }
//         }
//     }
//     return max_len;
// }
// int main()
// {
//     return 0;
// }

// vector<int> BFKmp(string text, string pat)
// {
//     vector<int> ans;
//     for (int i = 0; i < text.length(); i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < pat.length(); j++)
//         {
//             if (pat[j] == text[i + j])
//             {
//                 cnt++;
//             }
//             if (cnt == pat.size())
//             {
//                 ans.push_back(i + 1);
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     for (auto x : BFKmp("hellololoololl", "ol"))
//     {
//         cout << x << endl;
//     }
//     return 0;
// }

// vector<int> search(string pat, string txt)
// {
//     vector<int> indices;
//     int post = txt.find(pat);
//     // cout << post << endl;
//     while (post != string::npos)
//     {
//         indices.push_back(post + 1);
//         post = txt.find(pat, post + 1);
//     }
//     return indices;
// }
// int main()
// {
//     search("ol", "heoollooolol");
//     return 0;
// }

// int findMin(vector<int> &b)
// {
//     int mini = INT_MAX;
//     for (auto x : b)
//     {
//         mini = min(mini, x);
//     }
//     return mini;
// }
// int findSum(vector<int> &b)
// {
//     int sum = 0;
//     for (int i = 0; i < b.size(); i++)
//     {
//         sum += b[i];
//     }
//     return sum;
// }
// bool check(vector<int> &b, int mid, int k)
// {
//     int cnt = 1;
//     int sum = 0;
//     for (int i = 0; i < b.size(); i++)
//     {
//         if (sum + b[i] > mid)
//         {
//             cnt++;
//             sum = b[i];
//         }
//         else
//         {
//             sum += b[i];
//         }
//         if (cnt > k)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// int painterProblem(vector<int> &board, int n, int k)
// {
//     int low = findMin(board);
//     int high = findSum(board);
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (check(board, mid, k))
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
//     vector<int> b{10, 20, 30, 40};
//     int k = 2;
//     cout << painterProblem(b, b.size(), k) << endl;
//     return 0;
// }

// int func(int n)
// {
//     // This function gives the user number,
//     // This numbers are the prime factors of the 'n' number and it also provides the power of their factors
//     int count = 0;
//     unordered_map<int, int> mp;
//     for (int i = 2; i * i <= n; i++)
//     {
//         while (n % i == 0)
//         {
//             mp[i]++;
//             n = n / i;
//         }
//     }
//     if (n > 1)
//     {
//         mp[n]++;
//     }
//     for (auto x : mp)
//     {
//         count += x.second;
//     }
//     return count;
// }

// int func(int n)
// {
//     int count = 0;
//     unordered_map<int, int> mp;
//     for (int i = 2; i * i <= n; i++)
//     {
//         while (n % i == 0)
//         {
//             mp[i]++;
//             n = n / i;
//         }
//     }
//     if (n > 1)
//     {
//         mp[n]++;
//     }
//     for (auto x : mp)
//     {
//         count += x.second;
//     }
//     return count;
// }
// int suOfPower(int a,int b){
//     int sum=0;
//     for(int i=a;i<=b;i++){
//         sum+=func(i);
//     }
//     return sum;
// }

// int findMin(vector<int> &a)
// {
//     int mini = INT_MAX;
//     for (int i = 0; i < a.size(); i++)
//     {
//         mini = min(mini, a[i]);
//     }
//     return mini;
// }
// int SumArray(vector<int> &a)
// {
//     int sum = 0;
//     for (int i = 0; i < a.size(); i++)
//     {
//         sum += a[i];
//     }
//     return sum;
// }
// bool check(vector<int> &a, int mid, int k)
// {
//     int cnt = 1;
//     int sum = 0;
//     for (int i = 0; i < a.size(); i++)
//     {
//         if (sum + a[i] > mid)
//         {
//             cnt++;
//             sum = a[i];
//         }
//         else
//         {
//             sum += a[i];
//         }
//         if (cnt > k)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// int splitArray(vector<int> &a, int n, int k)
// {
//     int low = findMin(a);
//     int high = SumArray(a);
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (check(a, mid, k))
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
//     vector<int> a{1, 2, 3, 4, 5};
//     int k = 3;
//     int n = a.size();
//     cout << splitArray(a, n, k);
//     return 0;
// }

// int findSum(vector<int> &a)
// {
//     int sum = 0;
//     for (int i = 0; i < a.size(); i++)
//     {
//         sum += a[i];
//     }
//     return sum;
// }
// bool check(vector<int> &a, int mid, int k)
// {
//     int cnt = 1;
//     int sum = 0;
//     for (int i = 0; i < a.size(); i++)
//     {
//         if (sum + a[i] <= mid)
//         {
//             sum += a[i];
//         }
//         else
//         {
//             cnt++;
//             sum = a[i];
//         }
//         if (cnt > k)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// int splitArray(vector<int> &a, int n, int k)
// {
//     int low = 1;
//     int high = findSum(a);
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (check(a, mid, k))
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
//     vector<int> a{1, 2, 3, 4, 5};
//     int n = 5;
//     int k = 3;
//     cout << splitArray(a, n, k);
//     return 0;
// }

// int main()
// {
//     string a = "abc";
//     string b = "bac";
//     cout << (a < b) << endl;
//     return 0;
// }

// int KthMissing(vector<int> &a, int k)
// {
//     int n = a[a.size() - 1];
//     unordered_set<int> s;
//     for (int i = 0; i < a.size(); i++)
//     {
//         s.insert(a[i]);
//     }
//     int cnt = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (s.find(i) == s.end())
//         {
//             cnt++;
//             if (cnt == k)
//             {
//                 return i;
//             }
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> a{2, 3, 5, 9, 10};
//     int k = 4;
//     cout << KthMissing(a, k) << endl;
//     return 0;
// }

// int findSum(vector<int> &a)
// {
//     int sum = 0;
//     for (auto i : a)
//     {
//         sum += i;
//     }
//     return sum;
// }
// bool DaysFind(vector<int> &a, int n, int d, int mid)
// {
//     int Cday = 1;
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (ans + a[i] > mid)
//         {
//             Cday += 1;
//             ans = a[i];
//         }
//         else
//             ans += a[i];
//     }
//     return (Cday <= d) ? true : false;
// }
// int shipping(int n, vector<int> &a, int d)
// {
//     int low = 1;
//     int high = findSum(a);
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (DaysFind(a, n, d, mid))
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return low;
// }
// int main()
// {
//     vector<int> a{5, 4, 5, 2, 3, 4, 5, 6};
//     int n = a.size();
//     int d = 5;
//     cout << shipping(n, a, d);
//     return 0;
// }

// bool check(int b, vector<int> &v, int h)
// {
//     int hours = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         hours += ceil(v[i] / b);
//     }
//     if (hours == h)
//     {
//         return 1;
//     }
//     return 0;
// }
// int KokoEats(vector<int> &a, int h, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//     }
//     int low = 1;
//     int high = sum;
//     int ans = 0;
//     while (low <= high)
//     {
//         int b = (low + high) / 2;
//         int c = check(b, a, h);
//         if (c)
//         {
//             ans = max(ans, b);
//             cout << ans << endl;
//             low = b + 1;
//             // return b;
//         }
//         else
//         {
//             high = b - 1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> a{25, 12, 8, 14, 19};
//     int h = 5;
//     int n = a.size();
//     cout << KokoEats(a, h, n);
//     return 0;
// }

// int singleOneELement(vector<int> &arr, int n)
// {
//     if (n == 1)
//     {
//         return arr[0];
//     }
//     if (arr[0] != arr[1])
//     {
//         return arr[0];
//     }
//     if (arr[n - 1] != arr[n - 2])
//     {
//         return arr[n - 1];
//     }
//     int low = 1;
//     int high = n - 2;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
//         {
//             return arr[mid];
//         }
//         if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) || (mid % 2 == 1 && arr[mid] == arr[mid - 1]))
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// int lowerbound(vector<int> &a, int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     int ans = n;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (a[mid] == x)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else if (a[mid] > x)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }
// int upperbound(vector<int> &a, int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     int ans = n;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (a[mid] == x)
//         {
//             ans = mid;
//             low = mid + 1;
//         }
//         else if (a[mid] > x)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> a{2, 2, 3, 3, 3, 3, 4};
//     int n = a.size();
//     int x = 2;
//     int first = lowerbound(a, n, x);
//     int last = upperbound(a, n, x);
//     cout << (last - first) + 1 << endl;
//     return 0;
// }

// int findCiel(vector<int> &a, int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     int ans = -1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (a[mid] >= x)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }
// int FindFloor(vector<int> &a, int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     int ans = -1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (a[mid] <= x)
//         {
//             ans = mid;
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return ans;
// }
// void FirstAndLastOccurence(vector<int> &arr, int n, int x)
// {
//     int first = FindFloor(arr, n, x);
//     int last = findCiel(arr, n, x);
//     cout << first << " " << last << endl;
// }
// int main()
// {
//     vector<int> a{2, 4, 6, 8, 8, 8, 11, 13};
//     int n = a.size();
//     int x = 8;
//     FirstAndLastOccurence(a, n, x);
//     return 0;
// }

// int binarSearch(vector<int> &a, int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     int ans = n + 1;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (a[mid] >= x)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }
// vector<int> searchInsert(vector<int> &a, int n, int x)
// {
//     int index = binarSearch(a, n, x);
//     if (a[index] == x)
//     {
//         return a;
//     }
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == index)
//         {
//             ans.push_back(x);
//         }
//         ans.push_back(a[i]);
//     }
//     return ans;
// }

// int upperBound(vector<int> arr, int n, int x)
// {
//     int low = 0, high = n - 1;
//     int ans = n;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         // maybe an answer
//         if (arr[mid] > x)
//         {
//             ans = mid;
//             // look for smaller index on the left
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1; // look on the right
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 2, 3};
//     int n = 5, x = 2;
//     int ind = upperBound(arr, n, x);
//     cout << ind << "\n";
//     return 0;
// }

// int findValue(int Xcount, vector<int> X, int Ycount, vector<int> Y, int Zcount, vector<int> Z)
// {
//     int j = 0;
//     int i = 0;
//     int k = 0;
//     int ans = 0;
//     while (j < Ycount)
//     {
//         while (i < Xcount || k < Zcount)
//         {
//             ans += (Y[j] - X[i]) * (Y[j] - Z[k]);
//             if (i + 1 != Xcount)
//             {
//                 i++;
//             }
//             if (k + 1 != Zcount)
//             {
//                 k++;
//             }
//         }
//         j++;
//         i = 0;
//         k = 0;
//     }
//     cout << ans << endl;
//     return ans;
// }
// int main()
// {
//     int Xcount;
//     cin >> Xcount;
//     vector<int> X(Xcount);
//     for (int j = 0; j < Xcount; j++)
//     {
//         cin >> X[j];
//     }
//     int Ycount;
//     cin >> Ycount;
//     vector<int> Y(Ycount);
//     for (int j = 0; j < Ycount; j++)
//     {
//         cin >> Y[j];
//     }
//     int Zcount;
//     cin >> Zcount;
//     vector<int> Z(Zcount);
//     for (int j = 0; j < Zcount; j++)
//     {
//         cin >> Z[j];
//     }
//     int result;
//     result = findValue(Xcount, X, Ycount, Y, Zcount, Z);
//     cout << result;
//     return 0;
// }

// int findValue(int Xcount, vector<int> X, int Ycount, vector<int> Y, int Zcount, vector<int> Z)
// {
//     if (Xcount == 0 || Ycount == 0 || Zcount == 0)
//     {
//         return 0;
//     }
//     int ans = 0;
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i < Ycount && j < Xcount && k < Zcount)
//     {
//         ans += (Y[i] - X[j]) * (Y[i] - Z[k]);
//         i++;
//     }
//     return ans;
// }

// int BS(vector<int> a, int n, int x)
// {
//     int mid;
//     int low = 0;
//     int high = a.size() - 1;
//     while (low <= high)
//     {
//         mid = low + (high - low) / 2;
//         if (a[mid] == x)
//         {
//             return mid;
//         }
//         else if (a[mid] < x)
//         {
//             low = mid + 1;
//         }
//         else if (a[mid] > x and a[mid + 1] < x)
//         {
//             return mid;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> a{13, 5, 8, 15, 19};
//     cout << BS(a, a.size(), 15);
//     return 0;
// }

// int pyramidSum(int array_length, vector<int> arr)
// {
//     int n = array_length;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             arr[j] = arr[j] + arr[j + 1];
//             // cout << arr[j] << " ";
//         }
//         // cout << endl;
//     }
//     return arr[0];
// }
// int main()
// {
//     vector<int> a{1, 2, 3, 4, 5};
//     int n = a.size();
//     int result = pyramidSum(n, a);
//     cout << result << "\n";
//     return 0;
// }

// int checkPrime(int n)
// {
//     if (n == 1)
//     {
//         return 0;
//     }
//     if (n == 2)
//     {
//         return 1;
//     }
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int sumDigit(int n)
// {
//     int sum = 0;
//     while (n)
//     {
//         int r = n % 10;
//         sum += r;
//         n /= 10;
//     }
//     return sum;
// }
// int sumDigit(int n)
// {
//     if (n == 2)
//     {
//         return 0;
//     }
//     vector<int> v;
//     for (int i = 2; i < n; i++)
//     {
//         int temp = n;
//         int t = checkPrime(i);
//         if (t == 1)
//         {
//             while (temp % i == 0 && temp > 0)
//             {
//                 v.push_back(i);
//                 temp /= i;
//             }
//         }
//     }
//     int s = v.size();
//     int sum2 = 0;
//     for (int i = 0; i < s; i++)
//     {
//         sum2 += sumDigit(v[i]);
//     }
//     int sum = sumDigit(n);
//     if (sum == sum2)
//     {
//         return 1;
//     }
//     return 0;
// }

// bool checkPrime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }
//     if (n == 2)
//     {
//         return true;
//     }
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
// int sumDigit(int n)
// {
//     int sum = 0;
//     while (n > 0)
//     {
//         int r = n % 10;
//         sum += r;
//         n /= 10;
//     }
//     return sum;
// }
// int smithSum(int n)
// {
//     if (n == 2)
//     {
//         return 0;
//     }
//     vector<int> v;
//     for (int i = 2; i < n; i++)
//     {
//         int temp = n;
//         int t = checkPrime(i);
//         if (t == 1)
//         {
//             while (temp % i == 0 && temp > 0)
//             {
//                 v.push_back(i);
//                 temp /= i;
//             }
//         }
//     }
//     int s = v.size();
//     int sum2 = 0;
//     for (int i = 0; i < s; i++)
//     {
//         sum2 += sumDigit(v[i]);
//     }
//     int sum = sumDigit(n);
//     if (sum == sum2)
//     {
//         return 1;
//     }
//     return 0;
// }

// string primeFactors(int n)
// {
//     string ans = "";
//     while (n % 2 == 0)
//     {
//         ans += to_string(2);
//         n /= 2;
//     }
//     cout << n << endl;
//     for (int i = 3; i <= (n / 2); i = i + 2)
//     {
//         if (n % i == 0)
//         {
//             ans += to_string(i);
//             n /= i;
//         }
//     }
//     cout << ans + to_string(n) << endl;
// }
// int main()
// {
//     primeFactors(666 * 3);
//     return 0;
// }

// int countSubarrayInRange(vector<int> a, int L, int R)
// {
//     int ans = 0;
//     int n = a.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int c = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 if (a[k] >= L && a[k] <= R)
//                 {
//                     c++;
//                 }
//             }
//             if (c == j + 1)
//             {
//                 ans++;
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> a{2, 0, 11, 3, 0};
//     int L = 1;
//     int R = 10;
//     cout << countSubarrayInRange(a, L, R);
//     return 0;
// }

// int merge(int a[], int temp[], int left, int mid, int right)
// {
//     int i, j, k;
//     int count = 0;
//     i = left;
//     j = mid;
//     k = left;
//     while (i < mid && j <= right)
//     {
//         if (a[i] <= a[j])
//         {
//             temp[k++] = a[i++];
//         }
//         else
//         {
//             temp[k++] = a[j++];
//             count += (mid - i);
//         }
//     }
//     while (i < mid)
//     {
//         temp[k++] = a[i++];
//     }
//     while (j <= right)
//     {
//         temp[k++] = a[j++];
//     }
//     for (i = left; i <= right; i++)
//     {
//         a[i] = temp[i];
//     }
//     return count;
// }
// int _mergeSort(int a[], int temp[], int left, int right)
// {
//     int mid;
//     int count = 0;
//     if (left < right)
//     {
//         mid = (left + right) / 2;
//         count += _mergeSort(a, temp, left, mid);
//         count += _mergeSort(a, temp, mid + 1, right);
//         count += merge(a, temp, left, mid, right);
//     }
//     return count;
// }
// int mergeSort(int a[], int n)
// {
//     int temp[n];
//     return _mergeSort(a, temp, 0, n - 1);
// }
// int main()
// {
//     int a[] = {2, 4, 1, 3, 5};
//     int n = sizeof(a) / sizeof(a[0]);
//     cout << mergeSort(a, n);
//     return 0;
// }

// int RepeatAndMissing(vector<int> &a)
// {
//     int n = a.size();
//     int preSum = (n * (n + 1)) / 2;
//     unordered_map<int, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         mp[a[i]]++;
//     }
//     int sum = 0;
//     for (auto it = mp.begin(); it != mp.end(); it++)
//     {
//         sum += it->first;
//     }
//     return preSum - sum;
// }
// int main()
// {
//     vector<int> a{3, 1, 2, 5, 4, 6, 7, 5};
//     cout << RepeatAndMissing(a);
//     return 0;
// }

// vector<int> mergeNotExtra(vector<int> v1, vector<int> v2)
// {
//     int i = v1.size() - 1;
//     int j = 0;
//     while (i >= 0 && j < v2.size())
//     {
//         if (v1[i] > v2[j])
//         {
//             swap(v1[i--], v2[j++]);
//         }
//         else
//         {
//             break;
//         }
//     }
//     sort(v1.begin(), v1.end());
//     sort(v2.begin(), v2.end());
//     vector<int> ans;
//     for (int i = 0; i < v1.size(); i++)
//     {
//         ans.push_back(v1[i]);
//     }
//     for (int i = 0; i < v2.size(); i++)
//     {
//         ans.push_back(v2[i]);
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> v1{0, 1, 2, 3};
//     vector<int> v2{5, 6, 7, 8, 9};
//     for (auto x : mergeNotExtra(v1, v2))
//     {
//         cout << x << " ";
//     }
//     cout << endl;
//     return 0;
// }

// struct Interval
// {
//     int start;
//     int end;
// };
// bool compare(Interval a, Interval b)
// {
//     return a.start < b.start;
// }
// vector<Interval> MergeInterval(vector<Interval> I, int n)
// {
//     vector<Interval> merged;
//     sort(I.begin(), I.end(), compare);
//     merged.push_back(I[0]);
//     for (int i = 1; i < n; i++)
//     {
//         if (merged.back().end >= I[i].start)
//         {
//             merged.back().end = max(I[i].end, merged.back().end);
//         }
//         else
//         {
//             merged.push_back(I[i]);
//         }
//     }
//     return merged;
// }
// int main()
// {
//     vector<Interval> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
//     vector<Interval> mergedIntervals = MergeInterval(intervals, 4);
//     for (Interval interval : mergedIntervals)
//     {
//         cout << "[" << interval.start << ", " << interval.end << "]" << endl;
//     }
//     return 0;
// }

// int subarraysWithXorK(vector<int> &a, int k)
// {
//     int n = a.size();
//     int xr = 0;
//     map<int, int> mpp;
//     mpp[xr]++;
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xr = xr ^ a[i];
//         int r = xr ^ k;
//         cnt += mpp[r];
//         mpp[xr]++;
//     }
//     return cnt;
// }
// int main()
// {
//     vector<int> a = {4, 2, 2, 6, 4};
//     int k = 6;
//     int ans = subarraysWithXorK(a, k);
//     cout << "The number of subarrays with XOR k is: "
//          << ans << "\n";
//     return 0;
// }

// int subarray(vector<int> &nums, int k)
// {
//     int n = nums.size();
//     int prefix = 0;
//     int cnt = 0;
//     unordered_map<int, int> mp;
//     mp[0] = 1;
//     for (int i = 0; i < n; i++)
//     {
//         prefix += nums[i];
//         int remove = prefix - k;
//         cnt += mp[remove];
//         mp[prefix] += 1;
//     }
//     return cnt;
// }
// int main()
// {
//     vector<int> a{4, 2, 2, 6, 4};
//     // int n = 6;
//     int k = 4;
//     cout << subarray(a, k);
//     return 0;
// }

// int LongestLengthN2(vector<int> &nums, int n)
// {
//     int ans = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         long long sum = nums[i];
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             sum += nums[j];
//             if (sum == 0)
//             {
//                 ans = max(ans, j - i + 1);
//             }
//         }
//     }
//     return ans;
// }
// int Longestlength(vector<int> &a, int n)
// {
//     int ans = 0;
//     int sum = 0;
//     unordered_map<int, int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//         if (sum == 0)
//         {
//             ans = i + 1;
//         }
//         else
//         {
//             if (mpp.find(sum) != mpp.end())
//             {
//                 ans = max(ans, i - mpp[sum]);
//             }
//             else
//             {
//                 mpp[sum] = i;
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> a{
//         9,
//         -3,
//         3,
//         -1,
//         6,
//         -5,
//     };
//     int n = 6;
//     cout << LongestLengthN2(a, n);
//     return 0;
// }

// vector<int> pattern(int N)
// {
//     vector<int> ans;
//     vector<int> start;
//     vector<int> end;
//     start.push_back(N);
//     end.insert(end.begin(), N);
// c:
//     if (N > 0)
//     {
//         N -= 5;
//         start.push_back(N);
//         end.insert(end.begin(), N);
//         goto c;
//     }
//     else
//     {
//         int i = 0;
//         int j = 1;
//         while (i < start.size() || j < end.size())
//         {
//             if (i < start.size())
//             {
//                 ans.push_back(start[i++]);
//             }
//             else
//             {
//                 ans.push_back(end[j++]);
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     for (auto i : pattern(16))
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// struct node
// {
//     node *left;
//     int data;
//     int height;
//     node *right;
// };
// class AVL
// {
// public:
//     struct node *root;
//     AVL()
//     {
//         this->root = NULL;
//     }
//     int calheight(node *p)
//     {
//         if (p->left && p->right)
//         {
//             if (p->left->height < p->right->height)
//             {
//                 return p->left->height + 1;
//             }
//             return p->left->height + 1;
//         }
//         else if (p->left && p->right == nullptr)
//         {
//             return p->left->height + 1;
//         }
//         else if (p->right && p->left == nullptr)
//         {
//             return p->right->height + 1;
//         }
//         return 0;
//     }
//     int bf(node *n)
//     {
//         if (n->left && n->right)
//         {
//             return n->left->height - n->right->height;
//         }
//         else if (n->left && n->right == nullptr)
//         {
//             return n->left->height;
//         }
//         else if (n->right && n->left == nullptr)
//         {
//             return -(n->right->height);
//         }
//     }
//     node *llrotation(node *n)
//     {
//         node *p;
//         node *tp;
//         tp = n->left;
//         p = n;
//         p->left = tp->right;
//         tp->right = p;
//         return tp;
//     }
//     node *rrrotation(node *n)
//     {
//         node *p;
//         node *tp;
//         p = n;
//         tp = n->right;
//         p->right = tp->left;
//         tp->left = p;
//         return tp;
//     }
//     node *rlrotation(node *n)
//     {
//         node *p;
//         node *tp;
//         node *tp2;
//         p = n;
//         tp = p->right;
//         tp2 = p->right->left;
//         tp->left = tp2->right;
//         p->right = tp2->left;
//         tp2->right = tp;
//         tp->left = p;
//         return tp2;
//     }
//     node *lrrotation(node *n)
//     {
//         node *p;
//         node *tp;
//         node *tp2;
//         p = n;
//         tp = p->left;
//         tp2 = p->left->right;
//         tp->right = tp2->left;
//         p->left = tp2->right;
//         tp2->left = tp;
//         tp2->right = p;
//         return tp2;
//     }
//     node *insert(node *r, int data)
//     {
//         if (r == nullptr)
//         {
//             node *n = new node;
//             n->data = data;
//             r = n;
//             r->left = r->right = nullptr;
//             r->height = 1;
//             return r;
//         }
//         else
//         {
//             if (data < r->data)
//             {
//                 r->left = insert(r->left, data);
//             }
//             else
//             {
//                 r->right = insert(r->right, data);
//             }
//         }
//         r->height = calheight(r);
//         if (bf(r) == 2 && bf(r->left) == 1)
//         {
//             r = llrotation(r);
//         }
//         else if (bf(r) == -2 and bf(r->right) == -1)
//         {
//             r = rrrotation(r);
//         }
//         else if (bf(r) == -2 and bf(r->right) == 1)
//         {
//             r = rlrotation(r);
//         }
//         else if (bf(r) == 2 and bf(r->left) == -1)
//         {
//             r = lrrotation(r);
//         }
//         return r;
//     }

//     void levelorder_newline()
//     {
//         if (this->root == NULL)
//         {
//             cout << "\n"
//                  << "Empty tree"
//                  << "\n";
//             return;
//         }
//         levelorder_newline(this->root);
//     }
//     void levelorder_newline(node *r)
//     {
//         queue<node *> q;
//         node *curr;
//         q.push(r);
//         q.push(nullptr);
//         while (!q.empty())
//         {
//             curr = q.front();
//             q.pop();
//             if (curr == nullptr and q.size() != 0)
//             {
//                 cout << "\n";
//                 q.push(nullptr);
//                 continue;
//             }
//             if (curr != nullptr)
//             {
//                 cout << curr->data << " ";
//                 if (curr->left != nullptr)
//                 {
//                     q.push(curr->left);
//                 }
//                 if (curr->right != nullptr)
//                 {
//                     q.push(curr->right);
//                 }
//             }
//         }
//     }
//     ~AVL()
//     {
//         delete root;
//     }
// };

// vector<vector<int>> solve(vector<int> a, int n, int k)
// {
//     if (n < 4)
//     {
//         return {{-1}};
//     }
//     if (n == 4)
//     {
//         if (a[1] + a[2] + a[3] + a[0] == k)
//         {
//             return {{a[0], a[1], a[2], a[3]}};
//         }
//     }
//     vector<vector<int>> ans;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int l = j + 1; l < n; l++)
//             {
//                 for (int m = l + 1; m < n; m++)
//                 {
//                     if (a[i] + a[j] + a[l] + a[m] == k)
//                     {
//                         ans.push_back({a[i], a[j], a[l], a[m]});
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> a{0, 0, 2, 1, 1};
//     int n = a.size();
//     int k = 3;
//     vector<vector<int>> ans = solve(a, n, k);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[0].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// vector<vector<int>> ThreeSum(vector<int> &a)
// {
//     vector<vector<int>> ans;
//     for (int i = 0; i < a.size(); i++)
//     {
//         for (int j = i + 1; j < a.size(); j++)
//         {
//             for (int k = j + 1; k < a.size(); k++)
//             {
//                 if (a[i] + a[j] + a[k] == 0)
//                 {
//                     ans.push_back({a[i], a[j], a[k]});
//                 }
//             }
//         }
//     }
//     return ans;
// }

// vector<vector<int>> ThreeSum1(vector<int> &a)
// {
//     set<vector<int>> ans;
//     sort(a.begin(), a.end());
//     for (int i = 0; i < a.size() - 2; i++)
//     {
//         int j = i + 1;
//         int k = a.size() - 1;
//         while (j < k && j < a.size() && k > i)
//         {
//             int sum = a[i] + a[j] + a[k];
//             if (sum == 0)
//             {
//                 vector<int> temp = {a[i], a[j], a[k]};
//                 // sort(temp.begin(), temp.end());
//                 ans.insert(temp);
//                 j++, k--;
//             }
//             else if (sum < k)
//             {
//                 j++;
//             }
//             else
//             {
//                 k--;
//             }
//         }
//     }
//     return vector<vector<int>>(ans.begin(), ans.end());
// }

// int main()
// {
//     vector<int> a{-1, 0, 1, 2, -1, -4};
//     vector<vector<int>> ans = ThreeSum1(a);
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