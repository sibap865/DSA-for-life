#include<bits/stdc++.h>
using namespace std;
int main(){
    string  st = "Hello World";
    int size = st.size();
    cout << "Size of string: " << size << endl;
    cout << "st entered: " << st << endl;
    cout << "last char of string: " << st[st.size() - 1] << endl;
    getline(cin, st);
    cout << "You entered [[name]]: " << st << endl;
    cout << "first char of name string: " << st[0] << endl;
}