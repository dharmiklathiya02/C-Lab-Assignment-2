#include <iostream>
using namespace std;
void power(int m, int n)
{
    int result = 1, i;
        for (i = 0; i < n; i++)
    {
        m == i;
        result *= m;
    }
    cout << result;
}
int main()
{
    int m, n;
    cout << "Enter Value To Grnerate The Power";
    cin >> m;
    cout << "\n How Manny power Of Value";
    cin >> n;
    power(m, n);
    return 0;
}