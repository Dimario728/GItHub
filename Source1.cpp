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


	return 0;
}