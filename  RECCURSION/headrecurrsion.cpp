#include <iostream>
using namespace std;
void func(int n)
{
    if (n > 0)
    {
        func(n - 1);
        cout << n << endl;
    }
}
int main()
{
    int x;
    cout << "Enter the no : ";
    cin >> x;
    func(x);
}