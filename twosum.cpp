//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//vector<int> twoSum(vector<int>& nums, int target) {
//    unordered_map<int, int> map;
//    for (int i = 0; i < nums.size(); i++) {
//        int complement = target - nums[i];
//        if (map.find(complement) != map.end()) {
//            return { map[complement], i };
//        }
//        map[nums[i]] = i;
//    }
//    return { -1, -1 }; // or return {};
//}
//int main()
//{
//    vector<int> nums = { 3,2,4 };
//    int target;
//    cin >> target;
//    vector<int> res = twoSum(nums, target);
//    for (auto sum :res)
//    {
//        cout <<sum<< " ";
//    }
//}