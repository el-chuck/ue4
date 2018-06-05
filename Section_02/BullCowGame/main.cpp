#include <iostream>
#include <string>

using namespace std;

void PrintIntro();

string GetGuessAndPrintBack();

// the entry point for our application
int main()
{
	PrintIntro();

	constexpr int AMOUNT_OF_GUESSES = 5;
	for (int i = 1; i <= AMOUNT_OF_GUESSES; i++)
	{
		GetGuessAndPrintBack();
		cout << endl;
	}

	return 0;
}

// print introduction message to player
void PrintIntro()
{
	constexpr int WORD_LENGTH = 5;

	// introduction
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram i'm thinking of?\n\n";

	return;
}

// get the players guess and print it to the screen
string GetGuessAndPrintBack()
{
	// read player guess
	string Guess = "";
	cout << "What is your guess? ";
	getline(cin, Guess);
	
	// repeat back player guess
	cout << "Your guess is: " << Guess << endl;
	
	return Guess;
}