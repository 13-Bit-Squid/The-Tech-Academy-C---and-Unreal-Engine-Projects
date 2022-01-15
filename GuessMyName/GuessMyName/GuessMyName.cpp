#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;


int main()
{
	string word1;
	string word2;
	string keepPlaying;

	bool keepGuessing = true;

	while (keepGuessing)
	{
		cout << "Enter two words to compare lengths." << '\n';
		cout << "Enter a word: ";
		cin >> word1;
		cout << "Enter another word: ";
		cin >> word2;

		int l1 = word1.length();
		int l2 = word2.length();

		if (l1 < l2)
		{
			cout << "Your first word, " << word1 << ", has less characters than " << word2 << '\n';
			cout << "Would you like to try again? " << "Type Yes or No to compare more words." << '\n';
			cin >> keepPlaying;
			if (keepPlaying == "Yes")
			{
				keepGuessing;
			}
			else if (keepPlaying == "No")
			{
				keepGuessing = false;
			}
			else
			{
				cout << "Please enter either Yes or No." << '\n';
				cin >> keepPlaying;
			}
		}
		if (l1 == l2)
		{
			cout << "Your first word, " << word1 << ", has the same amount characters in " << word2 << '\n';
			cout << "Would you like to try again? " << "Type Yes or No to compare more words." << '\n';
			cin >> keepPlaying;
			if (keepPlaying == "Yes")
			{
				keepGuessing;
			}
			else if (keepPlaying == "No")
			{
				keepGuessing = false;
			}
			else
			{
				cout << "Please enter either Yes or No." << '\n';
			}
		}
		if (l1 > l2)
		{
			cout << "Your first word, " << word1 << ", has more characters than " << word2 << '\n';
			cout << "Would you like to try again? " << "Type Yes or No to compare more words." << '\n';
			cin >> keepPlaying;
			if (keepPlaying == "Yes")
			{
				keepGuessing;
			}
			else if (keepPlaying == "No")
			{
				keepGuessing = false;
			}
			else
			{
				cout << "Please enter either Yes or No." << '\n';
			}
		}
	}
	cout << "Thanks for playing!";
}