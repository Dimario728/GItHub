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
}