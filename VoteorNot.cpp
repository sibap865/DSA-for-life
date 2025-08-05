#include<bits/stdc++.h>
using namespace std;
int main(){
    // int
    int age;
    cin >> age; // Input age

    if (age < 0) {
        cout << "Invalid age!" << endl;
        return 1; // Exit if age is invalid
    }else if (age < 18) {
        cout << "You are a minor." << endl;
    }else
    {
        cout << "You are an adult." << endl;
    }
    return 0;
}