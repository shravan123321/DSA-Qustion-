#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a word: ";
    cin >> str;

    char stack[100];  // stack array
    int top = -1;

    // Step 1: Push all characters into stack
    for (char c : str) {
        stack[++top] = c;
    }

    // Step 2: Pop all characters to make reverse string
    string rev = "";
    while (top != -1) {
        rev += stack[top--];
    }

    // Step 3: Compare original and reversed
    if (str == rev)
        cout << str << " is a palindrome";
    else
        cout << str << " is not a palindrome";

    return 0;
}
