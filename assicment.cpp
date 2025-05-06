#include<bits/stdc++.h>
using namespace std;

const int n = 2;  // Number of rows
const int m = 2;  // Number of columns

// Function to take input for the matrix
void takinginput(int arr[n][m]) {
    cout << "\nTaking input for the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
}

// Function to print the matrix
void print(int arr[n][m]) {
    cout << "Printing the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to sum four matrices
void sum(int arr[n][m], int x[n][m], int y[n][m], int z[n][m], int t[n][m]) {
    cout << "Sum of the matrices:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = x[i][j] + y[i][j] + z[i][j] + t[i][j];  // Sum the matrices
        }
    }

    // Print the resulting sum matrix
    print(arr);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Declare matrices
    int a[n][m], s[n][m], p[n][m], l[n][m];

    // Take input for each matrix
    cout << "Entering the first matrix" << endl;
    takinginput(a);
    cout << "Entering the second matrix" << endl;
    takinginput(s);
    cout << "Entering the third matrix" << endl;
    takinginput(p);
    cout << "Entering the fourth matrix" << endl;
    takinginput(l);

    // Call the sum function with all four matrices (passing them correctly)
    sum(a, s, p, l);

    return 0;
}

