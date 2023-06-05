
#include <iostream>
#include <vector>

using namespace std;

int main()
{

	/////////////////////////////////////////////
	//		삽입
	/////////////////////////////////////////////

	vector<int> vec1;

	vec1.push_back(1);
	vec1.push_back(5);
	vec1.insert(vec1.begin(), 4);
	vec1.insert(find(vec1.begin(), vec1.end(), 1), 1000);

	// 이게 해당 위치에서 Claass에 대한 생성을 해서 불필요한 임시객체 생성 복사를 하지 않아 성능상의 이점이 있다.
	vec1.emplace(find(vec1.begin(), vec1.end(), 5), 142);
	vec1.emplace_back(23);


	for (auto a : vec1)
		cout << a << " ";
	cout << endl;
	


	/////////////////////////////////////////////
	//		삭제
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


	// 전체 삭제 << 근데 이것보다 그냥 pop_back을 뒤어서 하는 것이 더 이득일 듯.
	vec2.erase(vec2.begin(), vec2.end());
	for (auto a : vec2)
		cout << a << " ";
	cout << endl;





	return 0;
}