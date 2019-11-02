#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{

	cout << "Vvedite razmer matrici" << endl;
	int N;
	cin >> N;

	vector < vector <int> > matrix(N, vector <int>(N));

	cout << "Vvedite matrix" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> matrix[i][j];
		}
	}

	int max = 1;

	vector<int> summi;

	for (int i = 1; i < N; i++)
	{
			int sum = 0;
			for (int j = 0; j < max; j++)
			{
				sum += matrix[j][N - max + j];
			}
			summi.push_back(sum);
			max++;
	}

	max = 1;

	for (int i = 1; i < N; i++)
	{
			int sum = 0;
			for (int j = 0; j < max; j++)
			{
				sum += matrix[N - max + j][j];
			}
			summi.push_back(sum);
			max++;
	}

	copy(summi.begin(), summi.end(), ostream_iterator<int>(cout, " "));

	return 0;

}
