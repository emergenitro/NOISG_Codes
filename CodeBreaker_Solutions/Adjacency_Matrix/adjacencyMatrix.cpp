#include <iostream>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    int adj[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u-1][v-1] = 1;
        adj[v-1][u-1] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj[i][j];
        }
        cout << endl;
    }

    return 0;
}
