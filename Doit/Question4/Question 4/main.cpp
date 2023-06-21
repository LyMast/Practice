#include <iostream>
#include <array>
#include <vector>

using namespace std;

array<array<int, 1024>, 1024> g_arr;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int iN;
	int iM;

	cin >> iN >> iM;
	//cout << iN << iM;


	int iCnt1;
	int iCnt2;


	for (iCnt1 = 0; iCnt1 < iN; ++iCnt1)
	{
		for (iCnt2 = 0; iCnt2 < iN; ++iCnt2)
		{
			cin >> g_arr[iCnt1][iCnt2];
		}
	}
	

	int iX1, iY1;
	int iX2, iY2;
	int iSum;

	for (iCnt1 = 0; iCnt1 < iM; ++iCnt1)
	{
		iSum = 0;
		cin >> iY1 >> iX1 >> iY2 >> iX2;

		iX1 -= 1;
		iY1 -= 1;
		iX2 -= 1;
		iY2 -= 1;


		auto iter = g_arr[iY1].begin() + iX1;
		auto iterEnd = g_arr[iY2].begin() + iX2;

		int CountX = iX1;
		int CountY = iY1;
		for(;iter != iterEnd;)
		{
			iSum += *iter;
			CountX++;
			if (CountX >= iN)
			{
				CountY++;
				CountX = iX1;
				iter = g_arr[CountY].begin() + iX1;
				continue;
			}
			++iter;
		}
		iSum += *iterEnd;


		cout << iSum << endl;
	}






	return 0;
}