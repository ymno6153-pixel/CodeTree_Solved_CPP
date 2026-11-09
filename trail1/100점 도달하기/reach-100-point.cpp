#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int input;

    cin >> input;

    while(input<=100) {
        if(input>=90 && input<=100) {
            cout << "A" << " ";
        }
        else if(input>=80 && input<90) {
            cout << "B" << " ";
        }
        else if(input>=70 && input <80) {
            cout << "C" << " ";
        }
        else if(input>=60 && input < 70) {
            cout << "D" << " ";
        }
        else cout << "F" << " ";
        input++;
    }
    return 0;
}