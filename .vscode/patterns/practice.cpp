/*#include <bits/stdc++.h>
using namespace std;

void print1 (int n) {
     for (int i = 0; i < n ; i++ ) {
        for (int j = 0 ; j <n-i+1  ; j++){
            cout <<" " ; 
        }
        for (int j = 0 ; j < 2*i-1 ; j++){
            cout <<"*" ; 
        }
        for (int j = 0 ; j < n-i+1 ; j++){
            cout <<" " ; 
        }
        cout << endl;
        }
}
void print2 (int n) {
     for (int i =  1; i < n ; i++ ) {
        for (int j = 0 ; j < i ; j++){
            cout <<" " ; 
        }
        for (int j = 0 ; j < 2*n-(2*i+1) ; j++){
            cout <<"*" ; 
        }
        for (int j = 0 ; j < i ; j++){
            cout <<" " ; 
        }
        cout << endl;
        }
}

int main () {
    int n;
    cin >> n;
    print1 (n); 
    print2 (n);  
    }
*/
#include <iostream>
using namespace std;

void print1(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print2(int n) {
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print1(n);
    print2(n);
    return 0;
}
