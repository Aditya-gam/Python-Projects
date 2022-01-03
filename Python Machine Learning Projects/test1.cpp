// #include<bits/stdc++.h>

// using namespace std;

// class Integer {
//         int num;
//     public:
//         Integer(){ 
//             num = 0;
//             cout << "1";
//         }
//         Integer(int arg) {
//             cout << "2";
//             num = arg;
//         }
//         int getValue() {
//             cout << "3";
//             return num;
//         }
// };

// int main() {
//     Integer i;
//     i = 10;
//     cout << i.getValue();
//     return 0;
// }

#include <bits/stdc++.h>
#define N 4
#define M 4
using namespace std;

// To calculate min path in matrix
int findMaxPath(int mat[][M])
{

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < M; j++) {

			// When all paths are possible
			if (j > 0 && j < M - 1)
				mat[i][j] += min(mat[i - 1][j],
							min(mat[i - 1][j - 1],
							mat[i - 1][j + 1]));

			// When diagonal right is not possible
			else if (j > 0)
				mat[i][j] += min(mat[i - 1][j],
							mat[i - 1][j - 1]);

			// When diagonal left is not possible
			else if (j < M - 1)
				mat[i][j] += min(mat[i - 1][j],
							mat[i - 1][j + 1]);

			// Store min path sum
		}
	}
	int res = 10000000;
	for (int j = 0; j < M; j++)
		res = min(mat[N-1][j], res);
	return res;
}

// Driver program to check findMaxPath
int main()
{
	
	int mat1[N][M] = { { 4, 6, 14, 21 },
					{ 17, 0, 5, 5 },
					{ 4, 41, 22, 3 },
					{ 2, 51, 6, 0 } };
			
	cout << findMaxPath(mat1) << endl;
	return 0;
}