#include <iostream>
#include <vector>

int main()
{
	int n;
	int negative = 0;
	int positive = 0;
	int zeroes = 0;
	std :: cin >> n;
	std :: vector<int> v(n);
	for(int i = 0; i < n; ++i)
	{
		std :: cin >> v[i];
	}
	for(int i = 0; i < n; ++i)
	{
		if(v[i] < 0)
		{
			negative++;
		}
		else if(v[i] > 0)
		{
			positive++;
		}
		else if(v[i] == 0)
		{
			zeroes++;
		}
	}
	double res_neg;
	double res_pos;
	double res_zer;
	res_neg = (double) negative / (double) n;
	res_pos = (double) positive / (double) n;
	res_zer = (double) zeroes / (double) n;
	std :: cout << res_pos << '\n' << res_neg << '\n' << res_zer;
}