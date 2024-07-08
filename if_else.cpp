#include<bits/stdc++.h>
using namespace std;
int main () {
    int age;
    cin >> age;
    if (age < 18) {
        cout << "You aren't eligible for job"<<endl;
    }
    else if (age <= 57){
         cout << "You are eligible for job";
         if (age >= 55){
         cout << ", but retirement soon";
    } //no does not  save time
    }
     else {
         cout << "Retiremment time"<<endl;
    }
    return 0;
}