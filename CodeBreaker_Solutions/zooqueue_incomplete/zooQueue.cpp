#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, temp;
    bool flag = false;
    vector<int> v;
    cin >> N;
    while (N != 0){
        cin >> temp;
        v.push_back(temp);
        N--;
    }
    for (int i = 0; i < v.size()-2; ++i){
        if (v[i] > v[i+2] && v[i+1] < v[i+2]) flag = true;
    }
    if (flag) cout << "seven years of misfortune";
    else cout << "safe and sound";
    return 0;
}