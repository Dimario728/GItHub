#include <iostream>


int main() {
	setlocale(LC_ALL, "rus");
	const int maxSize = 100; // ������������ ������ �������
	int n;
	std::cout << "������� ������ ������� (�� ����� " << maxSize << "): ";
	std::cin >> n;
	if (n > maxSize || n <= 0) {
		std::cout << "������: �������� ������ �������\n";
		return 1;
	}

	int arr[maxSize];
	std::cout << "������� �������� �������:\n";
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	selectionSort(arr, n);

	std::cout << "��������������� ������:\n";
	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}