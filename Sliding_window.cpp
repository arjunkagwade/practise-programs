//#include <stdio.h>
//
//// Function to find the maximum sequence of continuous 1's by replacing
//// at most `k` zeroes by 1 using sliding window technique
//void findLongestSequence(int arr[], int n, int k)
//{
//    int left = 0;       // represents the current window's starting index
//
//    int count = 0;      // stores the total number of zeros in the current window
//
//    int window = 0;     // stores the maximum number of continuous 1's found
//                        // so far (including `k` zeroes)
//
//    int leftIndex = 0;  // stores the left index of maximum window found so far
//
//    // maintain a window `[left…right]` containing at most `k` zeroes
//    for (int right = 0; right < n; right++)
//    {
//        // if the current element is 0, increase the count of zeros in the
//        // current window by 1
//        if (arr[right] == 0) {
//            count++;
//        }
//
//        // the window becomes unstable if the total number of zeros in it becomes
//        // more than `k`
//        while (count > k)
//        {
//            // if we have found zero, decrement the number of zeros in the
//            // current window by 1
//            if (arr[left] == 0) {
//                count--;
//            }
//
//            // remove elements from the window's left side till the window
//            // becomes stable again
//            left++;
//        }
//
//        // when we reach here, window `[left…right]` contains at most
//        // `k` zeroes, and we update max window size and leftmost index
//        // of the window
//        if (right - left + 1 > window)
//        {
//            window = right - left + 1;
//            leftIndex = left;
//        }
//    }
//
//    // no sequence found
//    if (window == 0) {
//        return;
//    }
//
//    // print the maximum sequence of continuous 1's
//    printf("The longest sequence has length %d from index %d to %d",
//        window, leftIndex, (leftIndex + window - 1));
//}
//
//int main()
//{
//    int arr[] = { 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0 };
//    int k = 2;
//
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    findLongestSequence(arr, n, k);
//
//    return 0;
//}