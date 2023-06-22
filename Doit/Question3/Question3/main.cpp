#include <iostream>
//#include <vector>

using namespace std;

//vector<int> g_vec;
//vector<int> g_sumVec;


int S[100001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	int iN, iM;


	cin >> iN >> iM;

	//g_vec.reserve(iN);
	//g_sumVec.reserve(iN);

	 
	int iInput;

	
	int iCnt = 1;

	for (; iCnt <= iN; ++iCnt)
	{
		cin >> iInput;
		/*
		g_vec.emplace_back(iInput);
		iSum += g_vec[iCnt];

		g_sumVec.emplace_back(iSum);
		//*/

		S[iCnt] = S[iCnt - 1] + iInput;

	}



	int iMin, iMax, iResult;
	for (iCnt = 0; iCnt < iM; ++iCnt)
	{
		cin >> iMin >> iMax;
		//iResult = g_sumVec[iMax] - g_sumVec[iMin - 1];

		iResult = S[iMax] - S[iMin - 1];

		cout << iResult << "\n";
	}



	return 0;
}


// 문제 특이점 ::
// vector 헤더를 포함하니까 맛탱이가 가는 듯함...