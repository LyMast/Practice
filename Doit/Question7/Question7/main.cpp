#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	long iM, iN;

	::cin >> iN >> iM;

	vector<long> A(iN, 0);



	for (int i = 0; i < iN; ++i)
	{
		cin >> A[i];
	}
	sort(A.begin(), A.end());

	int iCount = 0;
	int i = 0;
	int j = iN - 1;


	while(i < j)
	{
		if (A[i] + A[j] < iM)
		{
			i++;
		}
		else if (A[i] + A[j] > iM)
		{
			j--;
		}
		else 
		{
			iCount++;
			i++;
			j--;
		}
	}
	cout << iCount << "\n";




	return 0;
}