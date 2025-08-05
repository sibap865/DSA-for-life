#include<bits/stdc++.h>
using namespace std;
int main(){
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "Sibaprasad Naik Beehera" << endl;
    // }
    // scope of the loop ends here

    int i = 0;
    while (i<10)
    {
        cout << "Sibaprasad Naik Beehera" << endl;
        i++;
    }
    cout << "Loop ended and  i is: " << i<< endl;
    // do-while loop
    int j = 9;  
    do
    {
        cout << "Sibaprasad Naik Beehera" << endl;
        j++;
    } while (j < 10);
    cout << "Loop ended and  j is: " << j<< endl;

    // The do-while loop will execute at least once, even if the condition is false.
    // This is because the condition is checked after the loop body has executed.
    // In contrast, a while loop checks the condition before executing the loop body.

    return 0;
    // we use return 0; to indicate that the program has executed successfully.
}