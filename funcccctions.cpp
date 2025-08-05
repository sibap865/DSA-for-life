#include<bits/stdc++.h>
using namespace std;

// void function: does not return a value
void printMessage(string message = "Hello, World!") {
    cout << message << endl; // prints a message 
}

 int sumof2(int a, int b){
    return a + b; // returns the sum of a and b
}

void addx(int x)
{
    x += 10; // modifies the local copy of x
    cout << "Value of x inside addx: " << x << endl; // prints
}

// passing by reference function
void addxRef(int &x)
{
    x += 10; // modifies the original variable
    cout << "Value of x inside addxRef: " << x << endl; // prints
}

void addtitle(string &title) {
    title = "Mr. " + title; // modifies the original string by adding a title
    cout << "Title added: " << title << endl; // prints the modified title
}
int main(){
    // functions are blocks of code that perform a specific task
    // they help in code reusability and organization

    // types of functions:
    // 1. Built-in functions: provided by the language or libraries
    // 2. User-defined functions: defined by the user to perform specific tasks
    // void functions: do not return a value
    // return-type functions: return a value of a specified type
    // parameterized functions: take parameters as input
    // non-parameterized functions: do not take parameters
    // passing by value: passing a copy of the variable
    // passing by reference: passing the address of the variable
    // function syntax:
    printMessage("you are the joy of mine"); // calling the void function with a default message   
    int x = 5, y = 10;
    // paasing parameters by value
    int result = sumof2(x, y); // calling the function with x and y as arguments

    cout << "Sum of " << x << " and " << y << " is: " << result << endl; // output the result

    // inbuilt functions
    int minValue = min(x, y); // finds the minimum of x and y
    int maxValue = max(x, y); // finds the maximum of x and y
    cout << "Minimum value bet. x & y : " << minValue << endl; // output the minimum value
    cout << "Maximum value bet. x and y : " << maxValue << endl; // output the maximum value


    int num = 10;
    cout << "Value of num before addx: " << num << endl; // prints the initial value of num
    // passing by value
    addx(num); // calling the function with num as argument
    cout << "Value of num after addx: " << num << endl; // prints

    // passing by reference 
    int &refNum = num; // creates a reference to num
    addxRef(refNum); // calling the function with refNum as argument
    cout << "Value of num after addxRef: " << num << endl; //
    string title = "Naik Behera";
    cout << "Initial title: " << title << endl; // prints the initial title
    addtitle(title); // calling the function to add a title
    cout << "Final title: " << title << endl; // prints the final 
    // my name is Sibaprasad Naik Behera


}