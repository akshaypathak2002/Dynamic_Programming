// There are N points on the road ,we  can step ahead by 1 or 2 . Find the number of ways you can reach at point N.
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
class ReachNthPoints
{
private:
    int n; // The number of points we have to reach
public:
    ReachNthPoints()
    {
        int n;
        cout << "Enter the points we have to reach " << endl;
        cin >> n;
        this->n = n;
    }
    int solution()
    {
        // if we analyze the problem
        //  if n=0 we don't have to move any point ahead then answer is 0
        // if n=1 we can only move 1 step  and answer is 1
        // if n=2 we can only move (1,1) or (2) so answer is 2
        // Now for finding n=3 we are going to use solution of n=1 and n=2
        const unsigned int M = pow(10, 9) + 7;
        int dp[n + 1];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            dp[i] = (dp[i - 1] + dp[i - 2]) % M;
        }
        return dp[n];
        // Its time complexity is O(N)
        // Its space complexity is O(N)
    }
};
int main()
{
    // We are creating an object dynamically
    ReachNthPoints *npoints = new ReachNthPoints();
    int result = npoints->solution();
    cout << result << endl;
    return 0;
}