#include <iostream>

using namespace std;

int main()
{
	constexpr int WORD_LENGTH = 5;

	cout << "Welcome to Bulls and Cows, a fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram i'm thinking of?" << endl;
	return 0;
}