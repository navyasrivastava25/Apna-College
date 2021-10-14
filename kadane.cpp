/*kadane algorithm 
    updates the negative sums to 0*/

#include<iostream>
#include<climits>

using namespace std;

int main() {

    int n; 

    cout<<"enter size : ";
    cin>>n;

    int arr[n];

    cout<<"emter array : ";
    for(int i=0; i<n; i++) {

        cin>>arr[i];
    }

    int currentSum=0; 
    int maxSum=INT_MIN; 

    for(int i=0; i<n; i++) {

        currentSum+=arr[i];

        if(currentSum<0) 
            currentSum=0;

        maxSum=max(maxSum, currentSum);
    }

    cout<<maxSum;

    return 0; 
}