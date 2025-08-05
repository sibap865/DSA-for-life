#include<bits/stdc++.h>
using namespace std;

int main() {
    // int 
    int x =10;
    long y=20;
    cin >> x; // This will cause an error due to redefinition of 'x'
    cout << "You entered: " << x << endl;
    long long z =30;
    // float f = 3.14f; // This line is valid, but let's keep it for demonstration
    float f = 3.14f;
    // double d = 3.14159; // This line is valid, but let's keep it for demonstration
    double d = 3.14159;
    cout << "Long: " << y << ", Long Long: " << z << ", Float: " << f << ", Double: " << d << endl;
}