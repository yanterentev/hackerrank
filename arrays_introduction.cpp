#include <iostream>
#include <vector>

int main()
{
	int N;
	std :: cin >> N;
	std :: vector<int> v(N);
	for(int i = 0; i < N; i++)
	{
		std :: cin >> v[i];
	}
	for(int i = N - 1; i >= 0; i--)
	{
		std :: cout << v[i] << " ";
	}
}
