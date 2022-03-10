#include <iostream>

using namespace std;

unsigned long long int f(int n)
{
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    return f(n - 1) + f(n - 2);
}

int main()
{
    int n, i = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (i; i < n; i++) {
        cout << f(i) << endl;
    }
    return 0;
}