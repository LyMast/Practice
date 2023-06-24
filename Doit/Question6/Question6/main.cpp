#include <iostream>

using namespace std;


int main()
{
	/*
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


		if (A[i] > iN)
		{
			ref = A[i];
			
		}
	}
	//*/

	int N;
	cin >> N;
	int count = 1;
	int start_index = 1;
	int end_index = 1;
	int sum = 1;

	while (end_index != N)
	{
		if (sum == N)
		{
			count++;
			end_index++;
			sum += end_index;
		}
		else if (sum > N)
		{
			sum -= start_index;
			start_index++;
		}
		else
		{
			end_index++;
			sum += end_index;
		}
	}
	cout << count << "\n";

	return 0;
}