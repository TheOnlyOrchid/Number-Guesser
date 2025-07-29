#include <iostream>

int main() {
	const std::string gameName = "Number-Guesser";
	const int numberToGuess = 42; // temporarily hardcoded to prevent messing with randomisation.

	bool gameCompleted = false;
	int currentGuess;

	do {
		std::cout << "Hello, World!" << gameName << std::endl;
		std::cin >> currentGuess;
		std::cout << "You guessed: " << currentGuess << std::endl;

	} while (!gameCompleted);

	return 0;
}