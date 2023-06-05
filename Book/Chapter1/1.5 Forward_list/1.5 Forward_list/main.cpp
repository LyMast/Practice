#include <iostream>
#include <forward_list>
#include "Q3.h"

using namespace std;

bool check19(const stCITIZEN&);

int main()
{

	////////////////////////////////////////////////////////////
	//		����
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
	//		����  -  pop_front, erase_after
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


	// ù ���� �ں��� �� ���ұ��� ����. �ᱹ �� �� ���Ҹ� ���´�.
	fwd_list2.erase_after(fwd_list2.begin(), fwd_list2.end());
	for (auto a : fwd_list2)
		cout << a << " ";
	cout << endl;

	

	////////////////////////////////////////////////////////////
	//		����  -  remove, remove_if
	////////////////////////////////////////////////////////////

	forward_list<stCITIZEN> citizens = {
		{"KIM", 22},{"LEE", 23},{"PARK", 14},{"JIN", 16},{"AHN", 27}
	};
	auto copy_citizens = citizens; // ���� ����.

	cout << "��ü �ùε� :"; 
	for (const auto& c : citizens)
		cout << c << " ";
	cout << endl;
	
	// ���̰� 19�� ���� ������ ����Ʈ���� �����մϴ�.
	
	//*	*** ���� ǥ�������μ� �Ʒ��� �Ϲ� �Լ� ���� ����� ����.
	citizens.remove_if([](const stCITIZEN& c) {
		return (c.age < 19);
		});
	//*/
	//citizens.remove_if(check19);

	cout << "��ǥ�� �ִ� �ùε� : ";
	for (const auto& c : citizens)
		cout << c << " ";
	cout << endl;
	cout << endl;
	



	////////////////////////////////////////////////////////////
	//		����
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
	//		����ũ, �ݴ�
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