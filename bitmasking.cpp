//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <bitset>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> masks(n, 0);
//	for (int i = 0; i < n; ++i)
//	{
//		int num_workers;
//		cin >> num_workers;
//		int mask = 0;
//		for (int j = 0;j < num_workers;++j)
//		{
//			int day;
//			cin >> day;
//			mask = (mask | (1 << day));
//		}
//		masks[i] = mask;
//	}
//	int max_days = 0;
//	int person1 = -1;
//	int person2 = -1;
//	for (int i = 0;i < n;++i)
//	{
//		for (int j = i + 1;j < n;++j)
//		{
//			int intersection = (masks[i] & masks[j]);
//			int common_days = __builtin_popcount(intersection);
//			// cout<<i<<" "<<j<<" "<<common_days<<endl;
//
//			if (common_days > max_days)
//			{
//				max_days = common_days;
//				person1 = i;
//				person2 = j;
//			}
//			max_days = max(max_days, common_days);
//		}
//	}
//	cout << person1 << " " << person2 << " " << max_days << endl;
//}