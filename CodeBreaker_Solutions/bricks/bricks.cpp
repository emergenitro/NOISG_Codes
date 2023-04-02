#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    stack<int> s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() <= a[i]) {
            s.pop();
        }
        s.push(a[i]);
    }

    vector<int> ans;
    while (!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
