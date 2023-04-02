#include <iostream>
using namespace std;

void fibo(int n){
    long long int tempVar, firstTerm=0, secondTerm=1;
    for (int i = 0; i <= n; ++i){
        cout << firstTerm << endl;
        tempVar = ((firstTerm % 998244353) + (secondTerm % 998244353)) % 998244353;
        firstTerm = (secondTerm % 998244353);
        secondTerm = (tempVar % 998244353);
    }
}

int main(){
    int a;
    cin >> a;
    fibo(a);
    return 0;
}