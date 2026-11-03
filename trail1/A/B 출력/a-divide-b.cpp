#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    int res;
    cin >> a >> b;

    // 정수 부분
    cout << a / b << "."; // "4."

    // 소수 부분
    a = (a % b) * 10; // a = 20

    for(int i=0; i<20; i++) {
        res = a / b;
        cout << res;
        a = (a%b) * 10;
    }
    
    
    return 0;
}