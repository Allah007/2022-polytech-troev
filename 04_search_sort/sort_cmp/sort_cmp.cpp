#include <iostream>
#include <random>
#include <chrono>

int expon(int a, int b)
{
    double res = 1;
    for(int i = 0; i < b; ++i)
        res *= a;
    return res;
}

void fill_array_random(int arr[], int n, int a, int b)
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(a,b);
    
    for(int i=0; i<n; ++i)
    {
        arr[i] = dist(rng);
    }
}

void swap(int arr[], int idx_a, int idx_b)
{
    int temp = arr[idx_a];
    arr[idx_a] = arr[idx_b];
    arr[idx_b] = temp; 
}

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        if (min_index != i)
            swap(arr, i, min_index);
    }
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
    int pivotIndex = start + count;
    swap(arr, pivotIndex, start);
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr, i, j);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quick_sort(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int p = partition(arr, start, end);
    quick_sort(arr, start, p - 1);
    quick_sort(arr, p + 1, end);
}

int main() {
    int n;
    for (int i = 1; i < 5; ++i) {
    n = expon(10, i);
    int* arr1 = new int[n];
    int* arr2 = new int[n];
    fill_array_random(arr1, n, 0, n);
    fill_array_random(arr2, n, 0, n);

    auto t1 = std::chrono::high_resolution_clock::now();
    selection_sort(arr1, n);
    auto t2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> select = t2 - t1;

    t1 = std::chrono::high_resolution_clock::now();
    quick_sort(arr2, 0, n - 1);
    t2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> quick = t2 - t1;

    delete arr1;
    delete arr2;
    std::cout << "1e+0" << i << ": " << select.count() << " (ss), " << quick.count() << " (qs)" << std::endl; 
  }
  return 0;
}
