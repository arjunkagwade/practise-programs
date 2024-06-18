//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <bitset>
//using namespace std;
//void PrintAllSubsets(int N, int maximum_mask_required)
//{
//	//print the empty set or the null set seperately.
//	cout << "0";
//
//	//In the outer loop we will iterate through all the masks required
//	// i.e from 0 to 2^N-1
//	for (int mask = 0; mask <= maximum_mask_required; mask++)
//	{
//		//In the inner loop we will check whether the k-th bit of
//		// the mask is set or not
//			   //If k-th bit is set k+1 th item is present in the subset
//			   // Else k+1-th item is not present in the current subset.
//		for (int k = 0; k < N; k++)
//		{
//			if ((mask & (1 << k)) != 0)
//			{
//				// the k-th bit of the mask is set print k+1 (1 based indexing)
//				cout << k + 1 << " ";
//			}
//		}
//		cout << "\n";
//	}
//}
//
//int main()
//{
//
//	int N = 3; // There N items in the set numbered from 1 to N
//
//	int maximum_mask_required = (1 << N) - 1;// Maximum mask that will be required to represent a subset
//
//	// Print all subsets of set S consisting of N items.
//	PrintAllSubsets(N, maximum_mask_required);
//	return 0;
//}