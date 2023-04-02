#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t, x1, x2, y1, y2;
    vector<int> v;
    cin >> t;
    for (int i = 0; i < t; ++i){
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2 || y1 == y2) v.push_back(abs(x1-x2) + abs(y1-y2));
        else v.push_back(abs(x1-x2) + abs(y1-y2) + 2);
    }

    for (auto i : v){
        cout << i << endl;
    }

    return 0;
}