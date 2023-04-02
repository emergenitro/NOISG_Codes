#include <iostream>
using namespace std;

int main()
{
    int d, temp, sum=0;
    cin >> d;
    do {
        cin >> temp;
        sum += temp;
        d -= 1;
    } while (d > 0);

    cout << sum;
    return 0;
}