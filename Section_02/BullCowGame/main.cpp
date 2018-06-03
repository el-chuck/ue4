#include <iostream>
#include <string>

using namespace std;

int main()
{
	constexpr int WORD_LENGTH = 5;

	// introduction
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram i'm thinking of?\n\n";
	
	// read player guess
	string Guess = "";
	cout << "What is your guess?";
	getline(cin, Guess);

	// repeat back player guess
	cout << "Your guess is: " << Guess << endl;

	// read player guess
	cout << "What is your guess? ";
	getline(cin, Guess);

	// repeat back player guess
	cout << "Your guess is: " << Guess << endl;
	
	return 0;
}