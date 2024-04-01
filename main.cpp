#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
//Задача 1.
double mean(double a, double b) {
	double mean;
	mean = (a + b) / 2;
	return mean;
}
//Задача 2.
double mean_arr(int arr[], int length) {
	double mean{};
		for (int i = 0; i < length; i++) {
			mean += arr[i];
		}
		mean /= length;
		return mean;

	}
//Задача 3.
void powers(int N, int M) {
	int a = N;
	if (N == 0) {
		std::cout << "0 в любой степени 0\n\n";
	}
	else
	for (int i = 0; i <= M; i++) {
		if (i == 0) {
			std::cout << "1 ";
		}
		else if (i == 1) {
			std::cout << N << ' ';
		}
		else if (i > 1) {
			N *= a;
			std::cout << N << ' ';
		}
		
	}
}


//Задача 4
void positive_arr(int arr[], int length){
	for (int i = 0; i < length; i++){
		if (arr[i] < 0)
			arr[i] = -arr[i];
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n{};

	//1
	std::cout << "\nЗадача 1\n";
	std::cout << mean(10, 200) << '\n';

	//2
	std::cout << "\nЗадача 2\n";
	const int size = 6;
	int arr[size]{ 42,5,12,43,20,-7 };
	std::cout << mean_arr(arr, size) << "\n\n";

	//3
	std::cout << "\nЗадача 3\n";
	powers(6, 5);
	std::cout << '\n';

	//4
	std::cout << "\nЗадача 4\n";
	int arr2[size]{ 23, -5, 14, -100,-89, 0 };
	positive_arr(arr2, size);
	for (int i = 0; i < size; i++) {
		std::cout << arr2[i] << ' ';
	}






	return 0;
}
