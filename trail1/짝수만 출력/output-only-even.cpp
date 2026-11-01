#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);

    do {
        if(a % 2 == 0) {
            cout << a << " ";
            a+=2;
        }
    }while(a <= b);
    return 0;
}