#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
	cout << "Vvedite razmer matrici" << endl;
	int m, n;
	cin >> m >> n;

	vector < vector <int> > matrix(m, vector <int>(n));

	cout << "Vvedite matrix" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	
	int i1 = -1;
	int i2 = -1;
	int j1 = -1;
	int j2 = -1;

	for (int i = 0; i < m; i++)
	{
		int min = 214748364;
		int max = -214748364;

		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				i1 = i;
				j1 = j;
			}

			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
				i2 = i;
				j2 = j;
			}
		}
		matrix[i2][j2] = max;
		matrix[i1][j1] = min;
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j] << " " ;
		}
		cout << endl;
	}
	
	return 0;

}
