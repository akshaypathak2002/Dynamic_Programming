// In this you have to find-nth fibonacci number
/*
The Tribonacci sequence Tn is defined as follows:

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
*/
#include <iostream>
using namespace std;
int tribonacciSequence(int &n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    int first = 0;
    int second = 1;
    int third = 1;
    for (int i = 3; i <= n; i++)
    {
        int fourth = first + second + third;
        first = second;
        second = third;
        third = fourth;
    }
    return third;
    // It time complexity is O(n)
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin >> n;
        cout << tribonacciSequence(n) << endl;
    }
    return 0;
}