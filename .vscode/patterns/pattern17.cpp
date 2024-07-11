#include <bits/stdc++.h>
using namespace std;

void print1(int n) {
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << ch;
            if (j < breakpoint) {
                ch++;
            } else {
                ch--;
            }
        }
        // space (not needed because we are printing the characters without extra space)
        // new line after each row
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print1(n);
    return 0;
}
