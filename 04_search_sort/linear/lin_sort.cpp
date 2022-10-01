#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int x, int result[]){

    int s = 0;

    for (int i = 0; i < n; i++){

        if (arr[i] == x){

            s += 1;

            result[s - 1] = i;

        }

    }

    if (s == 0){

        cout << "Element is not present in the array" << endl;

        return -1;

    }
    else {

        return s;

    }

}

int main(){

    int arr[] = {-996, -960, -944, -887, -865, -860, 120, -846, -831, -790, -785, -700, -691, -662, -662, -647, 
    -640, -587, -532, -524, -519, -501, -497, -475, -471, -461, -457, -452, -442, -441, -416, 
    -412, -411, -390, -389, -358, -341, -306, -257, -253, -252, -248, -208, -143, -134, -82, 
    -79, -11, 21, 26, 48, 68, 69, 72, 93, 95, 99, 115, 120, 120, 156, 164, 181, 200, 231, 252, 288, 
    304, 336, 343, 364, 402, 419, 486, 546, 584, 595, 596, 606, 627, 636, 666, 666, 683, 701, 
    740, 766, 780, 782, 794, 802, 829, 832, 837, 858, 875, 881, 882, 883, 883, 120, 947, 959};

    int result[] = {};

    int x = 120;

    int n = sizeof(arr) / sizeof(arr[0]);

    int amount = linear_search(arr, n, x, result);

    if (amount == -1){

        return 1; // прога странно себя ведет когда элемента нет в массиве

    }

    cout << "The amount of number " << x << " in the array is " << amount << " times" << endl;

    cout << "All matching indexes: " << endl;

    for (int i = 0; i < amount; i++){

        cout << result[i] << endl;

    }

return 0;

}