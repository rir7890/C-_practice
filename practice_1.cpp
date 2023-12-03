#include <bits/stdc++.h>
using namespace std;

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