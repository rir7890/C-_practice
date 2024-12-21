#include <bits/stdc++.h>
using namespace std;

// declaration of the function
int protoSubtract(int, int);

// int => type , addition => identifier
// a,b => parameters
// call by value
int addition(int a, int b)
{
    return a + b;
}
void printmessage()
{
    cout << "hello world" << endl;
}

// call the parameters by reference
string concatenate(const string &a, const string &b)
{
    return a + b;
}
// inline function is used when the function does not
// handle complex logic
const inline string stringAdd(const string &a, const string &b = " rahul")
{
    return a + b;
}

template <class T>
T typeAddFunction(T a, T b)
{
    return a + b;
}

template <class T, class U>
T are_equal(T a, U b)
{
    return (a == b);
}
int main()
{
    // string z = stringAdd("hello");
    // const int v = protoSubtract(6, 1);
    // int v = typeAddFunction<int>(6, 1);
    int v = are_equal<int, int>(1, 1.00);
    cout << v << endl;
    return 0;
}

int protoSubtract(int a, int b)
{
    return a - b;
}