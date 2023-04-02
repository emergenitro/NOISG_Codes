#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a, sum=0, count=0;
    vector<int> v;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    for (auto i : v){
        sum += i;
        if (sum > n) break;
        else{
            count++;
        }
    }
    cout << count;
    return 0;
}