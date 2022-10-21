#include <iostream>
#include <cassert>

int* insert(int arr[], int n, int x, int p);

int search_position(int arr[], int n, int x);

int* insert_sorted(int arr[], int n, int x);

int main(){

    // insert 

    int arr[10] = {0, 1, 2, 3,   4, 5, 6, 7, 8, 9};

    int expected_arr_mod[11] = {0, 1, 2, 3, 10, 4, 5, 6, 7, 8, 9};

    int* arr_mod = insert(arr, 10, 10, 4);

    for (int i = 0; i < 11; ++i){

        assert(arr_mod[i] == expected_arr_mod[i]);

    }

    // search_position

    int arr1[4] = {1, 3, 5, 6};

    assert(search_position(arr1, 4, 5) == 2);

    int arr2[4] = {1, 3, 5, 6};

    assert(search_position(arr2, 4, 7) == 4);

    // insert_sorted

    int arr3[10] = {0, 1, 2, 3, 4, 5,    6, 7, 8, 9};

    int expected_arr1_mod[11] = {0, 1, 2, 3, 4, 5, 5, 6, 7, 8, 9};

    int* arr1_mod = insert_sorted(arr3, 10, 5);
    
    for (int i = 0; i < 11; ++i){

        assert(arr1_mod[i] == expected_arr1_mod[i]);

    }

    return 0;

}

int* insert(int arr[], int n, int x, int p){

    for (int i = n; i > p; i--){

        arr[i] = arr[i - 1];

    }

    arr[p] = x;

    return arr;

}

int search_position(int arr[], int n, int x){

    for (auto i = 0; i < n - 1; ++i){

        if (arr[i] >= x)

        return i;

    }

    return n;
}

int* insert_sorted(int arr[], int n, int x){

    int p = search_position(arr, n, x);

    return insert(arr, n, x, p);

}