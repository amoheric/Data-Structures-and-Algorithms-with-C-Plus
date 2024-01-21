#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void insertionSort(vector<int>& arr) {
    int i, key, j;
    for (i = 1; i < arr.size(); i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> data = { /* Data loaded from file or array */ };
    clock_t start, end;

    start = clock();
    insertionSort(data);
    end = clock();

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by insertion sort: " << time_taken << " seconds" << endl;

    // Print sorted data if less than 100 elements
    if (data.size() < 1000) {
        for (int num : data) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}