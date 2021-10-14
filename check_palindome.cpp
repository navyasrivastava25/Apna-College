//check palindrome 

#include<iostream>

using namespace std;

int main() {

    int n;

    cout << "enter size of name : ";
    cin >> n;

    char arr[n+1];

    cout << "enter name : ";
    cin >> arr;

    bool check = 1;

    for(int i = 0; i < n; i++) {

        if(arr[i] != arr[n-1-i]) {

            check = 0;
            break;
        }
    }

    cout << endl;

    if(check == true)
        cout << arr << " is a palindrome" << endl;
    else 
        cout << arr << " is not a palindrome" << endl;

    cout << endl;

    return 0;
}