#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binary_search (int arr [], int n, int x){

    int low = 0;

    int high = n - 1;

    while (low <= high){

        int mid = (low + high) / 2;

        if (arr[mid] == x){

            return mid;

        }

        else if (x > arr[mid]){

            low = mid + 1;

        }
        else {

            high = mid - 1;

        }

    }

    return -1;

}


int main(){

    int arr[] = {1, 4, 2, 10, 5, 9, 20, 55, 22, 22, 9, 10}; // пренебречь дубликатами? 

    int x = 22;

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); // массив должен быть сперва отсортирован чтобы бинарка работала 

    int result = binary_search(arr, n, x);

    if (result == -1){

        cout << "Element is not present in the array" << endl;

    }
    else {

        cout << "Element is in the array at the index " << result << endl;

    }

return 0;

}






