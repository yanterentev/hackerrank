#include <iostream>
#include <cmath>

int update_diff(int a, int b)
{
	return std :: abs(a - b);
}
int update_sum(int a, int b)
{
	return a + b; 
}

int main()
{
	int a, b;
	int r1, r2;
	std :: cin >> a >> b;
	r1 = update_diff(a, b);
	r2 = update_sum(a, b);
	std :: cout << r1 << '\n' << r2;
	return 0;
}
