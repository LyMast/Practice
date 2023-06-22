#include <iostream>

using namespace std;

long g_S[1000001];
long g_C[1001];

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int iN, iM;
	cin >> iN >> iM;


	int input;
	cin >> input;
	g_S[0] = input;


	for (int i = 1; i < iN; ++i)
	{
		cin >> input;
		g_S[i] = g_S[i - 1] + input;
	}


	/*	시간 초과.
	for (int iFirst = 1 ; iFirst <= iN; ++iFirst)
	{
		for (int iSec = 1 ; iSec <= iFirst; ++iSec)
		{
			if ( ((g_S[iFirst] - g_S[iSec - 1])) % iM == 0)
				++iCount;
		}
	}
	//*/

	int iCount = 0;

	for (int i = 0; i < iN; ++i)
	{
		int remainder = g_S[i] % iM;

		if (remainder == 0)
			++iCount;

		g_C[remainder]++;
	}


	for (int i = 0; i < iM; ++i)
	{
		if (g_C[i] > 1)
			iCount = iCount + (g_C[i] * (g_C[i] - 1) / 2);
	}

	cout << iCount << "\n";


	return 0;
}