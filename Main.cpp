#include <iostream>
#include <array>

using namespace std;

int main() {
	array<char, 27> arr{ ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char letter = ' ';
	int sum = 0;
	cout << "Введiть слово: \n";
	while (letter != '-') { // Знак стоп
		cin >> letter;
		for (int i = 0; i < arr.size(); i++) {
			if (letter == arr[i]) {
				sum += i;
				//cout << letter << " - " << i << "\n"; // test
			}
		}
	}
	cout << "\n----------------------\n";
	cout << sum;
}
