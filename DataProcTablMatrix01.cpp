#include <iostream>

// äîäàòêîâà á³áë³îòåêà 
#include <time.h>

using namespace std;

int main()
{
	// ãåíåðàòîð âèïàäêîâèõ ÷èñåë
	srand((unsigned)time(NULL));
	setlocale(LC_ALL, ".1251");
	system("color 1F");

	// ðîçì³ðè ìàòðèöi
	int A[100][100];
	int n, k, i;
	char z;

	n = 5;
	int a = -99;
	int b = 99;

	do
	{
		system("cls");
		printf("\n\tÇàïîâíåííÿ ìàòðèöi A[%2i][%2i] öiëèìè äâîçíà÷íèìè ÷èñëàìè. \n\n", n, n);

		for (k = 0; k < n; k++)
		{
			cout << "\t";
			for (i = 0; i < n; i++)
			{
				do
				{
					A[k][i] = a + rand() % (b - a + 1);
				} while (abs(A[k][i])<10 || abs(A[k][i])>99);
				printf("%5i", A[k][i]);
			}
			cout << "\n";
		}

		int poz = 0;
		int neg = 0;
		long sump = 0;
		long dobn = 1;
		cout << "\n\n\tÏåðåäðóêîâêà ìàòðèöi:\n\n";
		for (k = 0; k < n; k++)
		{
			cout << "\t";
			for (i = 0; i < n; i++)
			{
				if (k != i) printf("%5i", A[k][i]);
				else {
					printf("    *");
					if (A[k][i] > 0)
					{
						poz++;
						sump += A[k][i];
					}
					else
					{
						neg++;
						dobn *= A[k][i];
					}
				}
			}
			cout << "\n";
		}

		printf("\n\n\tÄîäàòíèõ: %i", poz);
		printf("\n\tÑóìà äîäàòíèõ: %i", sump);
		printf("\n\tÂiä'ºìíèõ: %i", neg);
		printf("\n\tÄîáóòîê âiä'ºìíèõ: %i", dobn);


		cout << "\n\n\tÏðîäîâæèòè (y/n)? ";
		cin >> z;
	} while (z != 'n');


	cout << endl << endl << "\t";
	//system("pause");
	return 0;
}
