#include <iostream>
#include <vector>

using namespace std;

int main()
{

	cout << "Vvedite razmer matrici" << endl;
	int stroki, stolbci;
	cin >> stroki >> stolbci;

	vector < vector <int> > matrix(stroki, vector <int>(stolbci));

	cout << "Vvedite matrix" << endl;
	for (int i = 0; i < stroki; i++)
	{
		for (int j = 0; j < stolbci; j++)
		{
			cin >> matrix[i][j];
		}
	}

	float koef = 1.247;
	int step = stroki - 1;

	while (step >= 1)
	{
		for (int i = 0; i < stroki - step; i++)
		{
			if (matrix[i][0] > matrix[i + step][0])
			{
				vector<int> zamena(stolbci);
				for (int j = 0; j < stolbci; j++)
				{
					zamena[j] = matrix[i][j];
				}
				for (int j = 0; j < stolbci; j++)
				{
					matrix[i][j] = matrix[i + step][j];
				}
				for (int j = 0; j < stolbci; j++)
				{
					matrix[i + step][j] = zamena[j];
				}
			}
		}
		step /= koef;
	}

	for (int i = 0; i < stroki; i++)
	{
		for (int j = 0; j < stolbci; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}
