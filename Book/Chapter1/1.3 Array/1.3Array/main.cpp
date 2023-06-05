#include <iostream>
#include <windows.h>
#include <array>

#include "Q1.h"
#include "Q2.h"

using namespace std;


//void print(const array<int, 5>& ); <<- �̰��� �������� �迭�� �����Ǿ �ٸ� �迭�� ���� �� ���ٴ� ������ �ִ�. �̸� ���ؼ� ���ø��� ����Ѵ�.
template<size_t N>
void print(const array<int, N>& );
template<size_t N>
void reversePrint(const array<int, N>&);

int main(int argc, WCHAR* argv[])
{

	// �迭�� ���.

	array<int, 10> arr1;
	arr1[0] = 1;
	cout << "Array's 1 element is " << arr1[0] << endl;

	array<int, 4> arr2 = { 1,2,3,4 };
	cout << "All elemnet of arr2 is ";
	//for (auto a : arr2)
	for(int a = 0 ; a < arr2.size() ; a++)		// <<- arr2.size();  �Լ� Check
	{
		//cout << a << " ";
		cout << arr2[a] << " ";
	}
	cout << endl;



	// at �Լ���  [] �����ں��� �������� "����"�� �������ش�.
	
	// array<int, 4> arr2 = { 1,2,3,4 };
	try
	{
		cout << arr2.at(2) << endl;	// ������ �ƴ�
		cout << arr2.at(5) << endl; // out_of_range ���� �߻�
	}
	catch(const out_of_range& ex)
	{
		cout << ex.what() << endl;
	}







	// ���ø� �Լ��� ���ؼ� ����� ���Ѵ�.
	array<int, 5> arr3 = { 5,55,555,5555,55555 }; cout << &arr3; 
	print<arr3.size()>(arr3);
	array<int, 10> arr4 = {0,}; cout << &arr4;
	print<arr4.size()>(arr4);
	cout << endl;
	
	cout << arr3.front() << endl;
	cout << arr3.back() << endl;
	cout << arr3.data() << endl;		// <<- �迭 ù ��° ������ �����͸� ����. �̴� array Ŭ������ &������ ���� ����!!! // Ex) (arr3.data() == &arr3) == TRUE;
	cout << *arr3.data() << endl;
	cout << *(arr3.data() + 3);
	cout << endl;





	// Q1
	TEST1::dynamic_array<int> dyArr1(10);
	TEST1::dynamic_array<int> dyArr2 = dyArr1;
	TEST1::dynamic_array<int> dyArr3 = dyArr1 + dyArr2;

	int iStudents (3);
	TEST1::dynamic_array<student> class1(iStudents);

	class1[0].name = "Ayn";
	class1[0].standart = 1;
	class1[1].name = "Young";
	class1[1].standart = 2;
	class1[2].name = "Hoon";
	class1[2].standart = 3;
	cout << endl << endl;


	try
	{
		class1.at(4) = student{ "babty", 45 };
	}
	catch (...)
	{
		cout << "Exception!!" << endl;
	}

	// ���� ���� 
	auto class2 = class1;
	cout << "1���� �����Ͽ� 2�� ���� : " << class2.to_string() << endl;

	// �� �б��� ���ļ� ���ο� ū �б��� ����
	auto class3 = class1 + class2;
	cout << "1�ݰ� 2���� ���ļ� 3�� ���� : " << class3.to_string() << endl;





	return 0;
}









template <size_t N>
void print(const array<int, N>& arr)
{
	cout << "Arr's value is ";
	/*
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr.at(i) << " ";
	}*/



	auto iter = arr.begin();
	//array<int, N>::iterator iter;
	//iter = arr.begin();
	for (; iter != arr.end(); ++iter)
	{
		cout << *iter << " ";
	}

	cout << &arr;
	cout << endl;

	return;
}


template<size_t N>
void reversePrint(const array<int, N>& arr)
{
	//array<int, N>::iterator iter;

	return;
}