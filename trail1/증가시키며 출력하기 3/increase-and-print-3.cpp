#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int i = 10;
    while(true) {
        cout << i << " ";
        i+=2;
        if(i == 26) {
            cout << i ;
            break;
        }
    }

    return 0;
}