#include <iostream>
#include <cmath>

void update(int a, int b)
{
	int r1, r2;
	r1 = a + b;
	r2 = abs(a - b);
    std :: cout << r1 << '\n' << r2;
}

int main()
{
	int a, b;
	std :: cin >> a >> b;
	update(a, b);
}