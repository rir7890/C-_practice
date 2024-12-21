#include <bits/stdc++.h>
using namespace std;

int getTheRangeOfBits(int num, int range, int pos)
{
    // int mask = (1 << range) - 1;
    int end = (pos + range) - 1;
    int mask = 0;
    for (int i = pos; i <= end; i++)
    {
        mask = mask | (1 << i);
    }
    int shifted = (num >> pos);

    return (shifted & mask) >> pos;
}

int countValues(int n)
{
    int unset_bits = 0;
    while (n)
    {
        if ((n & 1) == 0)
            unset_bits++;
        n >>= 1;
    }
    return 1 << unset_bits;
}

int main()
{
    // int num = 214;
    // int k = 3;
    // int pos = 2;

    // const int bitsValue = getTheRangeOfBits(num, k, pos);
    // cout << bitsValue << endl;

    // Binary: 01100111
    unsigned int num = 3;

    // // Create a mask with the 1st, 3rd, and 4th bits set to
    // // 1
    // unsigned int mask = (1 << 0) | (1 << 2) | (1 << 3);

    // // Set the bits using OR
    // num = num | mask;

    // // Print the result
    // cout << "Result: " << num << endl;
    // cout << (num >> 1) << endl;
    // cout << ((num >> 0) & 1) << endl;

    // for (int i = 7; i >= 0; i--)
    // {
    //     cout << ((num >> i) & 1) << endl;
    // }
    // cout << endl;
    cout << countValues(16) << endl;

    return 0;
}