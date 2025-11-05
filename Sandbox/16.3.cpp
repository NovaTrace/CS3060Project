//Quinn Hackenberg
//CS 3060
//CPP 16.3

#include <iostream>
#include <string>
#include <type_traits>

using namespace std;

template <typename T1, typename T2>
typename std::common_type<T1, T2>::type minimum(T1 data1, T2 data2) {
	if (data1 < data2)
		return data1;
	else
		return data2;
}

template <typename T1, typename T2>
typename std::common_type<T1, T2>::type  maximum(T1 data1, T2 data2) {
	if (data1 > data2)
		return data1;
	else
		return data2;
}

int main()
{
	cout << "Int Typenames:\n";
	cout << "Min for 4 and 8 is: " << minimum(4, 8) << endl;
	cout << "Max for 4 and 8 is: " << maximum(4, 8) << endl;
	cout << "\nDouble Typenames:\n";
	cout << "Min for 4.6 and 4.1 is: " << minimum(4.6, 4.1) << endl;
	cout << "Max for 4.6 and 4.1 is: " << maximum(4.6, 4.1) << endl;
	cout << "\nMixed Typenames:\n";
	cout << "Min for 50 and 49.25 is: " << minimum(50, 49.25) << endl;
	cout << "Max for 50 and 49.25 is: " << maximum(50, 49.25) << endl;

	return 0;
};