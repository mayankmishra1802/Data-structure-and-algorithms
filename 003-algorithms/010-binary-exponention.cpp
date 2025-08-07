#include <iostream>
using namespace std;
long long binaryExponentiation(long long a, long long b) {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result *= a;
        }
        a *= a;
        b /= 2;
    }
    return result;
}
int main() {
    long long a = 2, b = 10;
    cout << binaryExponentiation(a, b) << endl; 
    return 0;
}
