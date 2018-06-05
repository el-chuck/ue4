#include <iostream>
#include <string>

using namespace std;

void PrintIntro();

string GetGuess();

// the entry point for our application
int main()
{
	PrintIntro();

	string Guess = GetGuess();

	// repeat back player guess
	cout << "Your guess is: " << Guess << endl;

	Guess = GetGuess();

	// repeat back player guess
	cout << "Your guess is: " << Guess << endl;
	
	return 0;
}

void PrintIntro()
{
	constexpr int WORD_LENGTH = 5;

	// introduction
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram i'm thinking of?\n\n";

	return;
}

string GetGuess()
{
	// read player guess
	string Guess = "";
	cout << "What is your guess?";
	getline(cin, Guess);
	return Guess;
}