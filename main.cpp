#include <iostream>
#include <cstdlib>

int main() {
	const std::string gameName = "Number-Guesser";
	const int numberToGuess = rand() & 101; // outputs random number between 0 and 100.
	const int maxGuesses = 7;
	
	int numberOfGuesses = 0;
	bool gameCompleted = false;
	int currentGuess;

	do {
		std::cout << "Welcome to " << gameName << " please enter a number below and try and guess the random number!" << std::endl;
		std::cin >> currentGuess;
		
		numberOfGuesses++;

		if (numberOfGuesses > maxGuesses) {
			std::cout << "You took too many guesses! you lose </3" << std::endl;
			break;
		}

		if (currentGuess == numberToGuess) {
			std::cout << "You win!!!" << std::endl;
			gameCompleted = true;
		} else if(currentGuess < numberToGuess){
			std::cout << "your guess is lower than the number." << std::endl;
		}
		else {
			std::cout << "your guess is higher than the numeber." << std::endl;
		}

	} while (!gameCompleted);

	return 0;
}