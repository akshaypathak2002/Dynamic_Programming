// In this we have to count the number  till a given range that has 4 in it
#include <iostream>
using namespace std;
class number4asdigit
{
private:
    int n; // Number till we have to find the number contaning 4 as the digit
public:
    number4asdigit()
    {
        cout << "Enter any  number to find count of digit contaning 4 " << endl;
        cin >> n;
    }
    bool iscontain4(int n)
    {
        // It will take a single number as the input
        while (n != 0) // Till the number becomes zero
        {

            if ((n % 10) == 4) // This is because of associativity
            {
                return true;
                break;
            }
            n /= 10;
        }
        return false;
    }
    int totalCount()
    {
        // we will take help of tabulation method or also called Bottom-up apporach
        int table[n + 1];
        table[0] = 0;
        table[1] = 0;
        table[2] = 0;
        table[3] = 0;
        table[4] = 1;
        for (int i = 5; i <= n; i++)
        {
            if (iscontain4(i))
                table[i] = table[i - 1] + 1; // Adding 1 to the previous result
            else
                table[i] = table[i - 1];
        }
        // for (int i = 0; i <= n; i++) -->Helps in debugging 
        // {
        //     cout << i << " " << table[i] << endl;
        // }
        return table[n]; 
        //Its time complexity is O(N)
        //Its space complexity is O(N)
    }
};
int main()
{
    // creating an object dynamically
    number4asdigit *obj1 = new number4asdigit();
    int totalcount = obj1->totalCount();
    cout << totalcount << endl;
    return 0;
}