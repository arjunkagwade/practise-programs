//#include<iostream>
//
//
//using namespace std;
//// Recursive function to replace each array element with the product
//// of every other element without using the division operator
//int findProduct(int arr[], int n, int left, int i)
//{
//    // base case: no elements left on the right
//    if (i == n) {
//        return 1;
//    }
//
//    // take backup of the current element
//    int curr = arr[i];
//
//    // calculate the product of the right subarray
//
//    int right = findProduct(arr, n, left * arr[i], i + 1);
//
//    // replace the current element with the product of the left and right subarray
//    arr[i] = left * right;
//    // return product of right the subarray, including the current element
//    return curr * right;
//}
//
//int main(void)
//{
//    int arr[] = { 5, 3, 4, 2, 6, 8 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    int temp = findProduct(arr, n, 1, 0);
//
//    // print the modified array
//    for (int i = 0; i < n; i++) {
//        printf("\n arr[%d] %d ", i, arr[i]);
//    }
//
//    return 0;
//}