//find the word with the maximum number of letters. display the word and the number of letters. 

#include<iostream>

using namespace std;

int main() {

    int n; 

    cout << "enter the number of letters along with spaces : ";
    cin >> n;
    cin.ignore();

    char arr[n+1];

    cout << "enter words : ";
    cin.getline(arr, n);
    cin.ignore();

    int curr_len = 0, max_len = 0;
    int i = 0;

    while(1) { //prob in single word

        if(arr[i] == ' ' || arr[i] == '\0') {

            if(curr_len > max_len) 
                max_len = curr_len;

            curr_len = 0;
        }

        else
            curr_len++;

        if(arr[i] == '\0')
            break;

        i++;
    }

    cout << "max_len = " << max_len;

    return 0;
}