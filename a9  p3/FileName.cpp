#include <iostream>
using namespace std;
int main() {
	int arr[4][3] = {
	{1, 2, 3},
	{2, 4, 6},
	{3, 5, -7},
	{-1, 4, 8}
	};
	int rows = 4, cols = 3;
	cout << "Negative values: ";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] < 0) {
				cout << arr[i][j] << " ";
			}
		}
	}
	cout << endl;
	return 0;
}