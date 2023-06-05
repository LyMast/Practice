#include <iostream>
#include <forward_list>
#include "Q3.h"

using namespace std;

bool check19(const stCITIZEN&);

int main()
{

	////////////////////////////////////////////////////////////
	//		삽입
	////////////////////////////////////////////////////////////
	forward_list<int> fwd_list1;
	fwd_list1.emplace_front(4);
	fwd_list1.push_front(23);

	auto iter = fwd_list1.begin();
	fwd_list1.emplace_after(iter, 2);

	iter = find(fwd_list1.begin(), fwd_list1.end(), 4);
	fwd_list1.emplace_after(iter, 224);

	fwd_list1.insert_after(iter, 223);

	for (auto a : fwd_list1)
		cout << a << " ";
	cout << endl;



	////////////////////////////////////////////////////////////
	//		삭제  -  pop_front, erase_after
	////////////////////////////////////////////////////////////
	forward_list<int> fwd_list2 = {1,2,3,4,5,6,7,8,9};
	fwd_list2.pop_front();
	for (auto a : fwd_list2)
		cout << a << " ";
	cout << endl;

	auto iter2 = fwd_list2.begin();
	fwd_list2.erase_after(iter2);
	for (auto a : fwd_list2)
		cout << a << " ";
	cout << endl;


	// 첫 원소 뒤부터 끝 원소까지 삭제. 결국 맨 앞 원소만 남는다.
	fwd_list2.erase_after(fwd_list2.begin(), fwd_list2.end());
	for (auto a : fwd_list2)
		cout << a << " ";
	cout << endl;

	

	////////////////////////////////////////////////////////////
	//		삭제  -  remove, remove_if
	////////////////////////////////////////////////////////////

	forward_list<stCITIZEN> citizens = {
		{"KIM", 22},{"LEE", 23},{"PARK", 14},{"JIN", 16},{"AHN", 27}
	};
	auto copy_citizens = citizens; // 깊은 복사.

	cout << "전체 시민들 :"; 
	for (const auto& c : citizens)
		cout << c << " ";
	cout << endl;
	
	// 나이가 19세 보다 적으면 리스트에서 제거합니다.
	
	//*	*** 람다 표현식으로서 아래의 일반 함수 사용과 결과가 같다.
	citizens.remove_if([](const stCITIZEN& c) {
		return (c.age < 19);
		});
	//*/
	//citizens.remove_if(check19);

	cout << "투표권 있는 시민들 : ";
	for (const auto& c : citizens)
		cout << c << " ";
	cout << endl;
	cout << endl;
	



	////////////////////////////////////////////////////////////
	//		정렬
	////////////////////////////////////////////////////////////
	forward_list<int> fwd_list3 = {23, 0 ,1, -3, 34, 29};
	fwd_list3.sort();
	for (const auto& c : fwd_list3)
		cout << c << " ";
	cout << endl;

	fwd_list3.sort( greater<int>() );
	for (const auto& c : fwd_list3)
		cout << c << " ";
	cout << endl;
	cout << endl;


	////////////////////////////////////////////////////////////
	//		유니크, 반대
	////////////////////////////////////////////////////////////
	forward_list<int> fwd_list4 = { 23, 0 ,1, -3, 34, 29 };

	fwd_list4.reverse();
	for (const auto& c : fwd_list4)
		cout << c << " ";
	cout << endl;












	return 0;
}

bool check19(const stCITIZEN& c)
{
	return (c.age < 19);
}