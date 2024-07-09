#include <bits/stdc++.h>
using namespace std;

// Returns sum of min and max element of all subarrays of size k
int SumOfKsubArray(int arr[], int n, int k) {
    int sum = 0;  // Initialize result

    deque<int> S, G;  // Deques to store indexes of useful elements

    // Process first window of size K
    for (int i = 0; i < k; i++) {
        // Remove all previous greater elements that are useless
        while (!S.empty() && arr[S.back()] >= arr[i])
            S.pop_back();
        
        // Remove all previous smaller elements that are useless
        while (!G.empty() && arr[G.back()] <= arr[i])
            G.pop_back();
        
        // Add current element at rear of both deques
        S.push_back(i);
        G.push_back(i);
    }

    // Process rest of the array elements
    for (int i = k; i < n; i++) {
        // Element at the front of the deque 'S' is the smallest element of the previous window
        // Element at the front of the deque 'G' is the largest element of the previous window
        sum += arr[S.front()] + arr[G.front()];

        // Remove all elements which are out of this window
        while (!S.empty() && S.front() <= i - k)
            S.pop_front();
        while (!G.empty() && G.front() <= i - k)
            G.pop_front();
        
        // Remove all previous greater elements that are useless
        while (!S.empty() && arr[S.back()] >= arr[i])
            S.pop_back();
        
        // Remove all previous smaller elements that are useless
        while (!G.empty() && arr[G.back()] <= arr[i])
            G.pop_back();
        
        // Add current element at rear of both deques
        S.push_back(i);
        G.push_back(i);
    }

    // Sum of minimum and maximum element of last window
    sum += arr[S.front()] + arr[G.front()];

    return sum;
}
int main() {
    int arr[] = {2, 5, -1, 7, -3, -1, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    cout << SumOfKsubArray(arr, n, k);
    return 0;
}
