#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int n;
    bool isPrime=true;
    cin >> n;
    if (n == 1 || n== 0) cout << "Not Prime";
    else {
        for (int i=2; i <= sqrt(n); ++i){
            if (n % i == 0) {
                isPrime=false;
            }
        }
        if (isPrime) cout << "Prime";
        else cout << "Not Prime";
    }
    return 0;
}