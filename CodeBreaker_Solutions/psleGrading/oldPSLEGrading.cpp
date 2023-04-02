#include <iostream>
using namespace std;


int main(){
    int grade;
    cin >> grade;
    switch (grade){
        case 91 ... 100: cout << "A*"; break;
        case 75 ... 90: cout << "A"; break;
        case 60 ... 74: cout << "B"; break;
        case 50 ... 59: cout << "C"; break;
        case 35 ... 49: cout << "D"; break;
        case 20 ... 34: cout << "E"; break;
        case 0 ... 19: cout << "U"; break;
    }
    return 0;
}