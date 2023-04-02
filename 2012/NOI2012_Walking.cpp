#include <iostream>
#include <vector>
using namespace std;

int main(){
    int l, n, temp1, temp2, count=0;
    map<int, int> m;
    vector<vector<int>> v;
    cin >> l >> n;
    for (int i = 0; i < n; i++){
        cin >> temp1 >> temp2;
        v.push_back({temp1, temp2});
    }

    for (int i = 0; i < v.size(); ++i){
        for (int j = i; j < v.size(); ++j){
            if (v[i][0] < v[j][0]){
                if (((l/v[i][1]) + v[i][0]) > ((l/v[j][1]) + v[j][0])){
                    v[i].push_back(i)
                    v[j].push_back(j)
            } else if (v[i][0]> v[j][0]){
                if (((l/v[i][1]) + v[i][0]) < ((l/v[j][1]) + v[j][0])) m[i]++;
            }
        }
    }
    cout << count;
}