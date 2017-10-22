#include <iostream>

int max_of_four(int a1, int a2, int a3, int a4)
{
	int max =  std :: max(std :: max(std :: max(a1, a2), a3), a4);
	std :: cout << max;
	return max;
}
int main()
{
	int a1, a2, a3, a4;
	std :: cin >> a1 >> a2 >> a3 >> a4;
	max_of_four(a1, a2, a3, a4);
	return 0;
}