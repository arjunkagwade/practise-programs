//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include<stack>
//
//using namespace std;
//int solve(int n, int k)
//{
//    if (n == 1)
//        return 0;
//
//    if (k <= pow(2, n - 2))
//        return solve(n - 1, k);
//
//    else return 1 - solve(n - 1, k - pow(2, n - 2));
//}
////int kthGrammar(int n, int k) {
////    return solve(n, k);
////}
//
//int main()
//{
//    int n=1, k=2;    
//    int result = solve(n, k);
//    cout << "" << result << endl;
//}