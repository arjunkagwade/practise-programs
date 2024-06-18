//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include<stack>
//#include <unordered_set>
//
//using namespace std;
//int findsmallestmissing(vector<int> const &nums) 
//{
//	unordered_set<int> distinct(nums.begin(), nums.end());
//	int index = 1;
//	while (true)
//	{
//		if (distinct.find(index)== distinct.end())
//		{
//			return index;
//		}
//		index++;
//	}
//}
//int main()
//{
//	vector<int> nums = { 1,4,2,-1,6,5 };
//	cout << "The smallest missing positive number from the array is: " << findsmallestmissing(nums);
//	return 0;
//}