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
	
	vector<int> izmit(m);

	int min = 24898980;
	int max = -32857034;
	int min_n;
	int max_n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				max_n = j;
			}

			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
				min_n = j;
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		izmit[i] = matrix[i][max_n];
	}

	for (int i = 0; i < m; i++)
	{
		matrix[i][max_n] = matrix[i][min_n];
	}

	for (int i = 0; i < m; i++)
	{
		matrix[i][min_n] = izmit[i];
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
