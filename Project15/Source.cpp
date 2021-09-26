#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
float median(float arr[], int n) {
   
    sort(arr, arr + n);
    if (n % 2 == 0)
        return (arr[n / 2 - 1] + arr[n / 2]) / 2;
    return arr[n / 2];
}
int main() {
    int n=10;
    float arr[50];
    for (int i = 0; i < n; i++) {
        cout << "Enter the elements of array: ";
        cin >> arr[i];
    }
    cout << "The median is : " << median(arr, n);
    return 0;
}