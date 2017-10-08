#include <math.h>
#include <iostream> 
#include <vector>

void create(int N, std :: vector<std :: vector<int>> &matrix)
{
	for(int i = 0; i < N; ++i)
	{
		for(int j = 0; j < N; ++j)
		{
			std :: cin >> matrix[i][j];
		}
	}
}
int main_diag(int N, std :: vector<std :: vector<int>> &matrix)
{
	int sum = 0;
    for(int i = 0; i < N; ++i)
    {
    	sum += matrix[i][i];
    }
    return sum;
}
int secondary_diag(int N, std :: vector<std :: vector<int>> &matrix)
{
	int sum = 0;
    for(int i = 0; i < N; ++i)
    {
    	sum += matrix[i][N - i];
    }
    return sum;
}
int main(int argc, char const *argv[])
{
	int N;
	int main_sum, sec_sum;
	std :: cin >> N;
	std :: vector<std :: vector<int>> matrix;
    create(N, matrix);
    main_sum = main_diag(N, matrix);
    sec_sum = secondary_diag(N, matrix);
    std :: cout << abs(main_sum - sec_sum);
	return 0;
}