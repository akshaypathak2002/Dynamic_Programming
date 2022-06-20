// In this we have find the maximum loot done by a wired thief in houses in a single line  using some rules--
/* 1. He cannot loot two consecutive house
    2. He knows the amount  inside the house in advanced
    */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Sticklerthief
{
private:
    vector<int> houses;
    int n; // for the  number of houses in the line
public:
    Sticklerthief()
    { // Default constructor
        int n;
        cout << "Enter the number of houses " << endl;
        cin >> n;
        this->n = n;
        cout << "Enter the amount in each house " << endl;
        for (int i = 0; i < n; i++) // For taking the input for each house
        {
            int temp; // for taking the input
            cin >> temp;
            houses.push_back(temp);
        }
    }
    int Sticklerthiefsolution()
    {
        // In this we are going to use Dynamic Programming using tabulation method  (bottom-up) method
        int table[n + 1];
        table[0] = houses[0];
        table[1] = houses[1];
        table[2] = houses[2] + table[0]; // This is maximum till now
        // Now we will find previous two house that is i-2 and i-3
        for (int i = 3; i < n; i++)
        {
            table[i] = houses[i] + max(table[i - 2], table[i - 3]);
        }
        return max(table[n - 1], table[n - 2]);
    }
};

int main()
{
    // Now we are creating an object dynamically
    Sticklerthief *thief = new Sticklerthief();
    int result = thief->Sticklerthiefsolution();
    cout << "Maximum amount that thief can loot keeping constarints in mind is " << endl;
    cout << result << endl;
    return 0;
}