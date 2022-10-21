#include <iostream>
#include <random>
#include <bits/stdc++.h>
#include <chrono>
#include <stdio.h>
#include <string.h>

//defining functions

void *swap(int arr[], int idx_a, int idx_b){

    int temp = arr[idx_a]; 

    arr[idx_a] = arr[idx_b];

    arr[idx_b] = temp; 

}

void selection_sort(int arr[], int size){

    for (int i = 0; i < size - 1; i++){

        int min_index = i;

        for (int j = i + 1; j < size; j++){

            if (arr[j] < arr[min_index]){

                min_index = j;

            }
        }

        if (min_index != i){

            swap(arr, i, min_index);

        }

    }

}

int partition(int arr[], int start, int end){

    int pivot = arr[start];

    int count = 0;

    for (int i = start + 1; i <= end; i++){
        
        if (arr[i] <= pivot)

            count++;

    }

    int pivotIndex = start + count;

    swap(arr, pivotIndex, start);

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex){

        while (arr[i] <= pivot){

            i++;

        }

        while (arr[j] > pivot){

            j--;

        }

        if (i < pivotIndex && j > pivotIndex){

            swap(arr, i, j);

            i++;

            j--;

        }

    }

    return pivotIndex;

}

void quick_sort(int arr[], int start, int end){

    if (start >= end)

        return;

    int p = partition(arr, start, end);

    quick_sort(arr, start, p - 1);

    quick_sort(arr, p + 1, end);

}


void fill_array_random(int arr[], int n, int a, int b){

    std::random_device dev;

    std::mt19937 rng(dev());

    std::uniform_int_distribution<std::mt19937::result_type> dist(a,b);
    
    for(int i=0; i<n; ++i){

        arr[i] = dist(rng);

    }
}

int main(){

    long long int e[] = {10, 100, 1000, 1000000, 1000000000, 1000000000000};

    for (int i = 0; i < 6; i++){

        auto n = e[i];

        auto arr1[n], arr2[n];

        fill_array_random(arr1, n, 0, 10000);

        memcpy(arr2, arr1, n * sizeof(int));

        auto t1 = std::chrono::high_resolution_clock::now();

        selection_sort(arr1, n);

        auto t2 = std::chrono::high_resolution_clock::now();

        std::chrono::duration<double, std::milli> ss_ms = t2 - t1;

        t1 = std::chrono::high_resolution_clock::now();

        quick_sort(arr2, 0, n - 1);

        t2 = std::chrono::high_resolution_clock::now();

        std::chrono::duration<double, std::milli> qs_ms = t2 - t1;

        std::printf("%.0e: %.5f (ss), %.5f (qs)\n",

                    static_cast<double>(n),

                    ss_ms.count(),

                    qs_ms.count());

    }

  return 0;

}
