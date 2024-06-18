//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//  /*  int longestSubstring(string s, int k)
//    {
//        int n = s.size();
//        if (n < k)
//            return 0;
//        if (k < 2)
//            return n;
//        unordered_map<char, int> mp;
//        for (char c : s)
//            mp[c]++;
//        int i = 0, a = 0, b = 0;
//        while (i < n && mp[s[i]] >= k)
//            i++;
//        if (i == n)
//            return i;
//        a = longestSubstring(s.substr(0, i), k);
//        if (i < n - 1)
//            b = longestSubstring(s.substr(i + 1), k);
//        return max(a, b);
//    }
//    int main()
//    {
//        string s;
//        cin >> s;
//        int k;
//        cin >> k;
//       int op = longestSubstring(s, k);
//       cout << " The longest substring is repeated times." << k << endl;
//    }*/
//
//
//int  longestSubstring(string s, int k)
//{
//    if (s.size() == 0 || k > s.size())   return 0;
//    if (k == 0)  return s.size();
//
//    unordered_map<char, int> Map;
//    for (int i = 0; i < s.size(); i++) {
//        Map[s[i]]++;
//    }
//
//    int idx = 0;
//    while (idx < s.size() && Map[s[idx]] >= k)
//        idx++;
//    if (idx == s.size()) return s.size();
//
//    int left = longestSubstring(s.substr(0, idx), k);
//    int right = longestSubstring(s.substr(idx + 1), k);
//
//    return max(left, right);
//}
//
//int main()
//{
//    string s;
//    cin >> s;
//    int k;
//    cin >> k;
//    int substr = longestSubstring(s, k);
//    cout << "The longest substring is:"<<substr << endl;
//}
//
