#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int i = 0, j = n - 1;
    bool isPalindrome = true;

    while (i < j) {
        if (arr[i] != arr[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        cout << "It is a palindrome" << endl;
    } else {
        cout << "It is not a palindrome" << endl;
    }

    return 0;
}