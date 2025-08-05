#include<bits/stdc++.h>
using namespace std;
int main() {
    // array basics
    // what is array ?
    // array is a collection of similar data types
    // base index is 0
   int array[5] ;
   cin >> array[0] >> array[1] >> array[2] >> array[3];
   cout << "You entered: " << array[3] << endl;
   array[3] += 10;
   cout << "After adding 10 : " << array[3] << endl;
   cout << "You are not  entered: " << array[4] << endl;
   cout << " out side elem 29 index is in array: " << array[30] << endl;
//    if you try to access an index that is not defined in the array, it will give you a garbage value or undefined behavior
   array[30] = 100; // This is an example of accessing an out-of-bounds index
    cout << " out side elem 29 index array after set it to 100 : " << array[30] << endl; // This will print the value at index 30, which is not defined
//    outside the array is not a good practice, it can lead to undefined behavior
}
