// Glenn Fortunato
// Assignment 2 (Bonus)
// COP3530

#include <iostream>
#include <vector>

using namespace std;

bool checkMinHeap(vector<int>& array) {
    for (int i = 0; i < array.size() / 2; ++i) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < array.size() && array[i] > array[left]) {
            return false;
        }
        if (right < array.size() && array[i] > array[right]) {
            return false;
        }
    }
    return true;
}

bool checkMaxHeap(vector<int>& array) {
    for (int i = 0; i < array.size() / 2; ++i) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < array.size() && array[i] < array[left]) {
            return false;
        }
        if (right < array.size() && array[i] < array[right]) {
            return false;
        }
    }
    return true;
}

int main() {
    
    vector<int> first = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
    vector<int> second = { 11, 9, 7, 5, 3, 1, -1, -3, -5, -7 }; 
    vector<int> third = { 6, 7, 8, 9, 10, 1, 2, 3, 4, 5 };  
    int numOfVectors = 3;
    vector<int> current;

    for (int i = 0; i < numOfVectors; i++) {
        switch (i) {
            case 0:
                current = first;
                break;
            case 1:
                current = second;
                break;
            case 2:
                current = third;
                break;
        }
        if (checkMinHeap(current)) {
            cout << "The array is a min heap." << endl;
        }
        else if (checkMaxHeap(current)) {
            cout << "The array is a max heap." << endl;
        }
        else {
            cout << "The array is neither a max heap nor a min heap." << endl;
        }
    }
    return 0;
}
