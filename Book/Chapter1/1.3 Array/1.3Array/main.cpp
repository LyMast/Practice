#include <iostream>
#include <windows.h>
#include <array>

#include "Q1.h"
#include "Q2.h"

using namespace std;


//void print(const array<int, 5>& ); <<- 이것의 문제점은 배열이 고정되어서 다른 배열을 받을 수 없다는 문제가 있다. 이를 위해서 템플릿을 사용한다.
template<size_t N>
void print(const array<int, N>& );
template<size_t N>
void reversePrint(const array<int, N>&);

int main(int argc, WCHAR* argv[])
{

	// 배열의 사용.

	array<int, 10> arr1;
	arr1[0] = 1;
	cout << "Array's 1 element is " << arr1[0] << endl;

	array<int, 4> arr2 = { 1,2,3,4 };
	cout << "All elemnet of arr2 is ";
	//for (auto a : arr2)
	for(int a = 0 ; a < arr2.size() ; a++)		// <<- arr2.size();  함수 Check
	{
		//cout << a << " ";
		cout << arr2[a] << " ";
	}
	cout << endl;



	// at 함수는  [] 연산자보다 느리지만 "예외"를 배출해준다.
	
	// array<int, 4> arr2 = { 1,2,3,4 };
	try
	{
		cout << arr2.at(2) << endl;	// 에러가 아님
		cout << arr2.at(5) << endl; // out_of_range 예외 발생
	}
	catch(const out_of_range& ex)
	{
		cout << ex.what() << endl;
	}







	// 템플릿 함수를 통해서 사이즈를 정한다.
	array<int, 5> arr3 = { 5,55,555,5555,55555 }; cout << &arr3; 
	print<arr3.size()>(arr3);
	array<int, 10> arr4 = {0,}; cout << &arr4;
	print<arr4.size()>(arr4);
	cout << endl;
	
	cout << arr3.front() << endl;
	cout << arr3.back() << endl;
	cout << arr3.data() << endl;		// <<- 배열 첫 번째 원소의 포인터를 배출. 이는 array 클래스의 &연산한 값과 같다!!! // Ex) (arr3.data() == &arr3) == TRUE;
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

	// 깊은 복사 
	auto class2 = class1;
	cout << "1반을 복사하여 2반 생성 : " << class2.to_string() << endl;

	// 두 학급을 합쳐서 새로운 큰 학급을 생성
	auto class3 = class1 + class2;
	cout << "1반과 2반을 합쳐서 3반 생성 : " << class3.to_string() << endl;





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