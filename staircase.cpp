#include <iostream>

int main()
{
	int n;
	std :: cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		for(int j =  i; j < n; j++)
		{
			std :: cout << " ";
		}
		for(int q = 0; q < i; ++q)
		{
			std :: cout << "#";
		}
		std :: cout << '\n';
	}
}
