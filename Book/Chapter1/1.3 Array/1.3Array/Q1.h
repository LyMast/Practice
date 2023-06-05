#pragma once






namespace TEST1
{
	template <typename T>
	class dynamic_array
	{
	public:
		dynamic_array(int n);
		dynamic_array(const dynamic_array& dyArray);

		~dynamic_array();

		T& operator[](int index);
		const T& operator[](int index) const;
		T& at(int index);
		size_t size() const;

		T* begin();
		const T* begin() const;
		T* end();
		const T* end() const;

		//friend dynamic_array<T> operator+(const dynamic_array<T>& dyArr1, dynamic_array<T>& dyArr2);
		//dynamic_array<T> operator+(dynamic_array<T>& dyArr2);

		//const T operator++(int);

		std::string to_string(const std::string& sep = ", ");

	private:
		T* data;
		size_t n;

	};

	
}

struct student
{
	std::string name;
	int standart;
};
//*
std::ostream& operator<<(std::ostream& os, const student& s);
//*/






template< typename T>
TEST1::dynamic_array<T>::dynamic_array(int n)
{
	this->n = n;
	data = new T[n];
}

template< typename T>
TEST1::dynamic_array<T>::dynamic_array(const dynamic_array<T>& dyArray)
{
	this->n = dyArray.n;
	data = new T[n];

	for (int iCnt = 0; iCnt < n; ++iCnt)
	{
		data[iCnt] = dyArray[iCnt];
	}
}



template< typename T>
TEST1::dynamic_array<T>::~dynamic_array()
{
	delete[] data;
}






template< typename T>
T& TEST1::dynamic_array<T>::operator[](int index)
{
	return data[index];
}

template< typename T>
const T& TEST1::dynamic_array<T>::operator[](int index) const
{
	return data[index];
}

template <typename T>
T& TEST1::dynamic_array<T>::at(int index)
{
	if (index < n)
		return data[index];

	throw "Index out of range";
}

template <typename T>
size_t TEST1::dynamic_array<T>::size() const
{
	return this->n;
}






template <typename T>
T* TEST1::dynamic_array<T>::begin()
{
	return data;
}

template <typename T>
const T* TEST1::dynamic_array<T>::begin() const
{
	return data;
}

template <typename T>
T* TEST1::dynamic_array<T>::end()
{
	return data + n;
}

template <typename T>
const T* TEST1::dynamic_array<T>::end() const
{
	return data + n;
}


//*
template <typename T>
std::string TEST1::dynamic_array<T>::to_string(const std::string& sep)
{
	if (n == 0)
		return "";
	std::ostringstream os;
	os << data[0];

	//for (int i = 1; i < n; i++)
		//os << sep << data[i];

	return os.str();
}
//*/





template <typename T>
TEST1::dynamic_array<T> operator+(const TEST1::dynamic_array<T>& dyArr1, TEST1::dynamic_array<T>& dyArr2)
{
	TEST1::dynamic_array<T> result(dyArr1.size() + dyArr2.size());
	std::copy(dyArr1.begin(), dyArr1.end(), result.begin());
	std::copy(dyArr2.begin(), dyArr2.end(), result.begin() + dyArr1.size());

	return result;
}

