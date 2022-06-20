// IN this we will find factorial using dp instead of normal brute force
#include <iostream>
using namespace std;
class factorialusingdp
{
private:
    int n;

public:
    factorialusingdp()
    {
        // using zero-arguemnt constructor
        int n; // creating a local variable
        cout << "Enter any number to find factorial of it " << endl;
        cin >> n;
        this->n = n; // assigning value to our private variable n
    }
    int factorial()
    {
        // using bottom-up or tabulation method
        int fact[n + 1];
        fact[0] = 1;
        fact[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            fact[i] = fact[i - 1] * i;
            // fetching the previous result we get new solution
        }
        return fact[n];
    }
};
int main()
{
    factorialusingdp *fact = new factorialusingdp();
    int result = fact->factorial();
    cout << result << endl;
    return 0;
}