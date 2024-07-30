#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool is_prime(int n) {
    // Check if n is less than 2
    if (n < 2) return false;
    // Check if n is divisible by any number from 2 to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int min_operations(int A[], int N) {
    // Initialize the number of operations to 0
    int operations = 0;
    // Iterate through the array
    for (int i = 0; i < N; i++) {
        // Calculate the sum of all elements in the array except Ax
        int sum_except_ax = 0;
        for (int j = 0; j < N; j++) {
            if (j != i) sum_except_ax += A[j];
        }
        // If Ax is not equal to the sum of all elements in the array except Ax, perform an operation
        if (A[i] != sum_except_ax) {
            // Choose the prime number p to be equal to the difference between the sum of all elements in the array except Ax and Ax
            int p = sum_except_ax - A[i];
            // Check if p is prime
            if (!is_prime(p)) {
                // If p is not prime, choose the next prime number
                while (!is_prime(p)) p++;
            }
            // Multiply p with Ax to perform the operation
            A[i] *= p;
            // Increment the number of operations
            operations++;
        }
    }
    // Return the total number of operations performed
    return operations;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    
    cout << min_operations(arr, n) << endl;
}
return 0;
}