#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

//int iArray[1000];

array<int, 1000> arr;

int main()
{
	int iCount;
	int iCnt = 0;	

	cin >> iCount;

	for (; iCnt < iCount; ++iCnt)
		cin >> arr[iCnt];

	
	sort(arr.begin(), arr.begin() + iCount);


	for (iCnt = 0; iCnt < iCount; ++iCnt)
		cout << arr[iCnt] << endl;



	return 0;
}