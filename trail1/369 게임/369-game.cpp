#include <iostream>
using namespace std;

bool has369(int n) {
    while(n != 0) {
        int digit = n%10;
        if((digit == 3) || (digit == 6) || (digit == 9)) {
            return true;
        }
         n/=10;
    }   
    return false; // 끝까지 못찾았으면 false 리턴
}

int main() {
    // Please write your code here.
    int input;
    cin >> input;
    for(int i=1; i<=input; i++) {
        if(i % 3 ==0 || has369(i)) // 3의 배수이거나 수에 3,6,9 중 하나가 들어가면 0 출력.
            cout << "0" << " ";
        else  
            cout << i << " ";
        
    }

}
