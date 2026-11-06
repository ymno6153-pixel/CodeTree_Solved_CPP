#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    char c;

    cin >> c >> a;
    
    if(c == 'A') {
        for(int i=1; i<=a; i++) {
            cout << i << " ";
        }
    }
    if(c == 'D') {
        for(int i=a; i>0; i--) {
            cout << i << " ";
        }
    }
    return 0;
}