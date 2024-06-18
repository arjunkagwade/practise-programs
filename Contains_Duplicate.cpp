//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//bool containsDuplicate(vector<int>& nums) {
//    map<int, int> mp;
//    for (auto i : nums) mp[i]++;
//    bool flag = false;
//    for (auto i : mp) {
//        if (i.second >= 2) return true;
//    }
//    return flag;
//}
//
//int main()
//{
//    vector<int> num = { 1,2,3,1 };
//
//    bool findduplicate = containsDuplicate(num);
//
//    cout << findduplicate <<endl;
//
//}