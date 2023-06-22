#include <iostream>
//#include <array>
//#include <vector>

using namespace std;

#define dfMAX_N 1025

int A[dfMAX_N][dfMAX_N];
int S[dfMAX_N][dfMAX_N];



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int iN, iM;
	cin >> iN >> iM;


	int input;
	for (int iX = 1; iX <= iN; ++iX)
	{
		for (int iY = 1; iY <= iN; ++iY)
		{
			cin >> input;
			A[iX][iY] = input;
			S[iX][iY] = S[iX][iY - 1] + S[iX - 1][iY] - S[iX - 1][iY - 1] + input;
		}
	}



	int iX1, iY1, iX2, iY2, iResult;
	for (int i = 0; i < iM; ++i)
	{
		cin >> iX1 >> iY1 >> iX2 >> iY2;

		iResult = S[iX2][iY2] - S[iX1 - 1][iY2] - S[iX2][iY1 - 1] + S[iX1 - 1][iY1 - 1];
		cout << iResult << "\n";
	}





































	/*	 肋给等 立辟 规过
	* 
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


	//*/



	return 0;
}