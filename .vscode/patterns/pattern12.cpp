#include <bits/stdc++.h>
using namespace std;

void print1 (int n) {
  int space = 2 * (n - 1);
  for (int i = 1 ; i<= n ; i++){
    //numbers left
    for (int j = 1 ; j <= i ; j++){
        cout << j;
    }
    //spaces
    for (int j = 1 ; j <= space ; j++){
        cout << " ";
    }
    //numbers right
    for (int j = i ; j >= 1 ; j--){
        cout << j;
    }
    cout << endl;
    space -= 2;
  }
}

int main () {
    int n;
    cin >> n;
    print1 (n);
    }