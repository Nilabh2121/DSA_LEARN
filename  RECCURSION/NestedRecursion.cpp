#include <iostream>
using namespace std;
int fun(int n)
{
    if (n > 100)
        return n - 10;
    return fun(fun(n + 11));
}
int main()
{
    int x;
    int y;
    cin >> y;
    x = fun(y);
    cout << x << endl;
    return 0;
}