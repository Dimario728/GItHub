#include <iostream>


<<<<<<< HEAD

=======
int main() {
	setlocale(LC_ALL, "rus");
	const int maxSize = 100; // ������������ ������ �������
	int n;
	std::cout << "������� ������ ������� (�� ����� " << maxSize << "): ";
	std::cin >> n;
	if (n > maxSize || n <= 0) {
		std::cout << "������: �������� ������ �������\n";
>>>>>>> b5f9417c962c8aebce77444e638140933538d57f
		return 1;
<<<<<<< HEAD
=======
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
>>>>>>> parent of 8086744 (Version 2.0)
}