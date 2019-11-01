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
	
	vector< vector <int> > izmit(stroki/2, vector <int>(stolbci/2));

	int l = 0;

	for (int i = stroki / 2; i < stroki; i++)
	{
		int k = 0;
		for (int j = stolbci / 2; j < stolbci; j++)
		{
			izmit[l][k] = matrix[i][j];
			k++;
		}
		l++;
	}

	l = 0;

	for (int i = stroki / 2; i < stroki; i++)
	{
		int k = 0;
		for (int j = stolbci / 2; j < stolbci; j++)
		{
			matrix[i][j] = matrix[l][k];   // ошибка
			k++;
		}
		l++;
	}

	for (int i = 0; i < stroki / 2; i++)
	{
		for (int j = 0; j < stolbci / 2; j++)
		{
			 matrix[i][j] = izmit[i][j];
		}
	}

	for (int i = 0; i < stroki; i++)
	{
		for (int j = 0; j < stolbci; j++)
		{
			cout << matrix[i][j] << " " ;
		}
		cout << endl;
	}
	
	return 0;

}
