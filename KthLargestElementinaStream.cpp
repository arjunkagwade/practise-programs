//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int k;
//priority_queue<int, vector<int>, greater<int>> minHeap;
//
//    void KthLargest(int k, vector<int>& nums) {
//        for (int num : nums) {
//            addele(num);
//        }
//    }
//
//    int addele(int val) {
//        if (minHeap.size() < k) {
//            minHeap.push(val);
//        }
//        else if (val > minHeap.top()) {
//            minHeap.pop();
//            minHeap.push(val);
//        }
//        return minHeap.top();
//    }
//
//    int main()
//    {
//        k=3;
//        vector<int> vec_nums = { 4, 5, 8, 2 };
//        KthLargest(k, vec_nums);
//        return 0;
//    }