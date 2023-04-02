#include <iostream>
using namespace std;

int main()
{
    long long int x, a, b;
    cin >> x;
    if (x == 1) cout << "Hello World" << endl;
    if (x == 2) {
        cin >> a >> b;
        cout << a * b << endl;
    }
    return 0;
}