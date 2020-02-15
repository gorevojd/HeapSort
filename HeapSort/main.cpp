#include <iostream>
#include "heap_sort.h"
#include "heap_sort.cpp"

using namespace std;

#define ARRAY_COUNT(arr) (sizeof(arr) / sizeof(arr[0]))

struct asd {
	int a;

	bool operator>(const asd& Right) {
		bool Result = this->a > Right.a;

		return(Result);
	}

	friend ostream& operator<<(ostream& os, const asd& Val);
};

ostream& operator<<(ostream& os, const asd& Val) {
	os << Val.a;

	return(os);
}

template<typename t> void PrintArray(t* Array, int Count) {
	for (int i = 0; i < Count; i++) {
		cout << Array[i] << " ";
	}

	cout << endl;
}

int main(int ArgsCount, char** Args) {
	int Arr[] = { 5,1,3,7,1,4,8,9,6,3 };
	int Count = ARRAY_COUNT(Arr);

	asd Arr2[] = {{1}, {5}, {3}, {8}, {2}};
	int Count2 = ARRAY_COUNT(Arr2);

	HeapSort<int>(Arr, Count, true);
	HeapSort<asd>(Arr2, Count2, true);

	PrintArray<int>(Arr, Count);
	PrintArray<asd>(Arr2, Count2);

	system("pause");
	return(0);
}