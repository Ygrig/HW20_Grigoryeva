#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>


template <typename T>
void show_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

template <typename T>
int searchIndex(T arr[], const int length, T value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}

template <typename T>
int searchLastIndex(T arr[], const int length, T value, int begin = 0) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

template <typename T>
T max(T arr[], const int length) {
	T max = arr[0];
	for (int i = 0; i < length; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	std::cout << "\n";
	return max;
}


template <typename T>
T min(T arr[], const int length) {
	T min = arr[0];
	for (int i = 0; i < length; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	std::cout << "\n";
	return min;
}

double MeanValue(int arr[], const int length) {
	double res = 0;
	for (int i = 0; i < length; i++)
		res += arr[i];
	return res / length;
}


void range(int arr[], const int length, int newbegin, int newend) {
	std::cout << '[';
	for (int i = 0; i < length; i++) {
		if (arr[i] >= newbegin && arr[i] <= newend)
			std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b]\n";
}

int counter (int arr[], const int length, int num) {
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] == num) {
			count++;
		}
	}
		return count;
	}

int main() {
	
	int n, m, k, d, newA, newB, number;

	const int size = 100;
	int arr[size];
	int A = -100, B = 100;
	srand(time(NULL));
	std:: cout << "Initial array of 100 random elements in a range [-100;100]: \n";
	for (int i = 0; i < size; i++) 
	arr[i] = rand() % (B + 1 - A) + A;
	show_arr(arr, size);
	std::cout << "\n";
	
	std::cout << "Enter element of array:\n";
	std::cin >> k;
	searchIndex(arr, size,k);
	std::cout << "First position of entered element " << k << " in initial array = " << searchIndex(arr, size, k) << "\n\n";
	std::cout << "Enter element of array:\n";
	std::cin >> d;
	searchLastIndex(arr, size, d);
	std::cout << "Last position of entered element " << k << " in initial array = " << searchLastIndex(arr, size, d) << "\n\n";

	std::cout << "Maximum element in this array =" << max(arr, 100) << "\n";
	std::cout << "Minimum element in this array =" << min(arr, 100) << "\n\n";

	std::cout << "Mean value of all elements = " << MeanValue(arr, size) << "\n\n";
	
	std::cout << "Enter beginning of new range:\n";
	std::cin >> newA;
	std::cout << "Enter ending of new range:\n";
	std::cin >> newB;
	std::cout << "Elements of initial array included in new range from " << newA << " to " << newB << " : ";
	range(arr, size, newA, newB);
	std::cout << "\n";

	std::cout << "Enter any element of initial array:\n";
	std::cin >> number;
	std::cout << "This element enters initial array " << counter (arr,size,number) << " time(s). " << "\n\n";



	return 0;
}