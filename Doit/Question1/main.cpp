#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int iCount;
	unsigned long long llNum;
	string str;
	int iNum = 0;

	cin >> iCount;
	cin >> str;

	for (int i = 0; i < iCount; ++i)
		//iNum += (int)str[i] - 48;
		iNum += (int)str[i] - '0';		// 위에 보다는 이것이 더 직관적이다.

	cout << iNum;





}