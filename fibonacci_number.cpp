// Find the factorial of number using dynamic programming
#include <iostream>
using namespace std;
class fibonacciUsingDynamicProgramming
{
private:
    int n;

public:
    fibonacciUsingDynamicProgramming()
    {
        // Factorial of a number
        cout << "Enter the number for factorial " << endl;
        cin >> n;
    }
    int fibonacciusingDp()
    {
        int fib[n + 1]; // for the tabulation method
        fib[0] = 0;     // first fibonacci number
        fib[1] = 1;     // second fibonacci number
        for (int i = 2; i <= n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2]; // we are making use of the  previous   solutions to get n fibonacci number
        }
        return fib[n];
        // The time compleixity of program is O(N)
        // Its space compleixity is also of O(N)
    }
};
int main()
{
    fibonacciUsingDynamicProgramming *fib = new fibonacciUsingDynamicProgramming(); // we are making use of with the help
    int result = fib->fibonacciusingDp();                                           // getting result of the fibonacci number
    cout << result << endl;                                                         // now printing the result
    return 0;
}