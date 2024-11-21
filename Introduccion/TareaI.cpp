#include <iostream>
using namespace std; 

int main()
{
	int matriz[2][2]{ {1,2}, {3,4} };
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			cout << matriz[i][j];
		}
		cout << endl; 
	}

	int Sudoku[9][9]{ {0, 3, 0, 0, 0, 0, 0, 0, 0} , {0, 2, 0, 9, 0, 6, 3, 0, 0 }, {0, 6, 0, 4, 0, 2, 0, 9, 0 } , {1, 0, 0, 0, 9, 0, 4, 0, 0 } , {0, 0, 8, 1, 0, 3, 5, 0, 0 } , {0, 0, 5, 0, 7, 0, 0, 0, 3 } , {0, 5, 0, 3, 0, 1, 0, 6, 0 } , {0, 0, 4, 6, 0, 7, 0, 3, 0 } , {0, 0, 0, 0, 0, 0, 0, 8, 0 } };
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			cout << Sudoku[i][j];
		}
		cout << endl;
}
