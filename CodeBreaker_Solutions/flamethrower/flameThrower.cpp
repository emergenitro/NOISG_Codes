#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    int N, K, maxDamage=0;
    vector<int> v;
    cin >> N >> K;
    while (N--){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size()-K+1; i++){
        if (maxDamage < accumulate(v.begin()+i, v.begin()+i+K, 0)) maxDamage = accumulate(v.begin()+i, v.begin()+i+K, 0);
    }

    cout << maxDamage;

    return 0;
}