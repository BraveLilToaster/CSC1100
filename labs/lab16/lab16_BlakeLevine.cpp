#include <iostream>
using namespace std;

int lastLargestIndex(int arr[], int arrSize) ;

int main(){
    int arr[7] = {2, 3, 4, 9, 2, 5, 6};
    int arrSize = 7;

    cout << "The index of the largest value in the array is " << lastLargestIndex(arr, arrSize) << "." << endl;
    cout << "The largest value in the array is " << arr[lastLargestIndex(arr, arrSize)] << "." << endl;

    return 0;
}

int lastLargestIndex(int arr[], int arrSize) {
    int index = 0;

    int large = arr[0];
    for( int i = 0; i <= arrSize; i++){
        if (large < arr[i]){
            large = arr[i];
            index = i;
        }
    }

    return index;
}
