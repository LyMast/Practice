#include <iostream>

using namespace std;

long A[5000001];

int main()
{
	long iN;

	cin >> iN;

	long* pF, pS;
	int iCount = 0;
	long ref;

	for (int i = 1; i < iN; i++)
	{
		A[i] = A[i - 1] + i;
	}

	for (int i = 1; i < iN; i++)
	{
		if (A[i] == iN)
		{
			iCount++;
			continue;
		}

		while (true)
		{
			if (A[i] > iN)
			{
				ref = A[i];

			}
		}
		
	}


	return 0;
}