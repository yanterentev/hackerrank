#include <iostream>

int main()
{
	int n, q;
	std :: cin >> n >> q;
	int **arr_main = new int*[n];
	//0 -> 1 2 3
	//1 -> 1
	//2 -> 1 1 1 1 1 1
	for(int i = 0; i < n; ++i)
	{
		int a;
		std :: cin >> a;
		arr_main[i] = new int[a];
		for(int j = 0; j < a; j++)
		{
			std :: cin >> arr_main[i][j];
		}
	}
	for(int i = 0; i < q; i++)
	{
		int q1;
		int q2;
		std :: cin >> q1 >> q2;
		std :: cout << arr_main[q1][q2] << '\n';
	}
	return 0;
}