
#include <iostream>
#include <vector>

using namespace std;

int main()
{

	/////////////////////////////////////////////
	//		����
	/////////////////////////////////////////////

	vector<int> vec1;

	vec1.push_back(1);
	vec1.push_back(5);
	vec1.insert(vec1.begin(), 4);
	vec1.insert(find(vec1.begin(), vec1.end(), 1), 1000);

	// �̰� �ش� ��ġ���� Claass�� ���� ������ �ؼ� ���ʿ��� �ӽð�ü ���� ���縦 ���� �ʾ� ���ɻ��� ������ �ִ�.
	vec1.emplace(find(vec1.begin(), vec1.end(), 5), 142);
	vec1.emplace_back(23);


	for (auto a : vec1)
		cout << a << " ";
	cout << endl;
	


	/////////////////////////////////////////////
	//		����
	/////////////////////////////////////////////

	vector<int> vec2 = { 0,1,2,3,4,5,6,7,8,9 };
	vec2.pop_back();
	for (auto a : vec2)
		cout << a << " ";
	cout << endl;


	vec2.erase(vec2.begin());
	for (auto a : vec2)
		cout << a << " ";
	cout << endl;


	vec2.erase(vec2.begin() + 1, vec2.begin() + 4);
	for (auto a : vec2)
		cout << a << " ";
	cout << endl;


	// ��ü ���� << �ٵ� �̰ͺ��� �׳� pop_back�� �ھ �ϴ� ���� �� �̵��� ��.
	vec2.erase(vec2.begin(), vec2.end());
	for (auto a : vec2)
		cout << a << " ";
	cout << endl;





	return 0;
}