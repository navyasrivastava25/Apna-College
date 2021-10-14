/* pairsum 
    find two number in array adding which will result into a number k given by the user*/

#include<iostream>
#include<climits>

using namespace std;

bool pairsum(int arr[], int n, int k);

int main() {

    int n;

    cout<<"enter size : ";
    cin>>n;

    int arr[n];

    cout<<"enter array : ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int k;

    cout<<"k=";
    cin>>k;

    cout<<pairsum(arr, n, k)<<endl;

    return 0;
}

bool pairsum(int arr[], int n, int k) {

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i]+arr[j]==k) {
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }

    return false;
}