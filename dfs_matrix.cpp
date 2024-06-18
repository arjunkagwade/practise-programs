//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//void dfs(int i, int j, int initialColor, int newColor, vector<vector<int>> & image)
//{
//	int n = image.size();
//	int m = image[0].size();
//	if (i < 0 || j < 0) return;
//	if (i >= n || j >= m) return;
//	if (image[i][j] != initialColor) return;
//
//		image[i][j] = newColor;
//
//		dfs(i - 1, j, initialColor, newColor, image);
//		dfs(i + 1, j, initialColor, newColor, image);
//		dfs(i, j - 1, initialColor, newColor, image);
//		dfs(i, j + 1, initialColor, newColor, image);
//
//
//}
//vector<vector<int>> floodfill(vector<vector<int>>& image, int sr, int sc, int newColor)
//{
//	int initialColor = image[sr][sc];
//	if (initialColor != newColor)
//		dfs(sr, sc, initialColor, newColor, image);
//	return image;
//}
//
//int main()
//{
//	vector<vector<int>> img = { {1,1,1 },
//								{1, 1, 0},
//								{1, 0, 1} };
//	int sr = 1, sc = 1, color = 2;
//	vector<vector<int>> res = floodfill(img, sr, sc, color);
//	for (int i = 0; i < res.size(); i++) {
//		for (int j = 0; j < res[i].size(); j++)
//			cout << res[i][j] << " ";
//		cout << endl;
//	}
//}