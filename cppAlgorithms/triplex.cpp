#include <iostream>
#include <ctime>

void GameIntro(int Difficulty)
{
	//Story line
	std::cout << "The school`s principal is applying a level " << Difficulty;
	std::cout << " pop quiz, whoever fails this test will be expelled\n Enter the right code to continue\n\n";
}

bool PlayGame(int Difficulty)
{
	GameIntro(Difficulty);
	const int CodeA = rand()  % Difficulty + Difficulty;
	const int CodeB = rand() % Difficulty + Difficulty;
	const int CodeC = rand() % Difficulty + Difficulty;

	int CodeSum = CodeA + CodeB + CodeC;
	int CodeProduct = CodeA * CodeB * CodeC;

	std::cout << "+There are 3 numbers in the code\n";
	std::cout << "\n+The code adds up to " << CodeSum;
	std::cout << "\n+The code multiplies to give " << CodeProduct;
	std::cout << std::endl;

	int GuessA, GuessB, GuessC;
	std::cin >> GuessA;
	std::cin >> GuessB;
	std::cin >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	//Check if the player`s guess is correct
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "\nKeep up the good work!\n\n";
		return true;
	}
	else
	{
		std::cout << "\nYou have been expelled from school!\n\n";
		return false;
	}

}


	int main()
	{
		srand(time(NULL)); //The sequence is now based on time
		
		int LevelDifficulty = 1;

		const int MaxLevel = 5;
		
		while (LevelDifficulty <= MaxLevel) //Loop until game is completed
		{
			bool bLevelComplete = PlayGame(LevelDifficulty);
			std::cin.clear(); // Clears any error
			std::cin.ignore(); // Discards the buffer

			if (bLevelComplete)
			{
				++LevelDifficulty;
				std::cout << "You passed this stage of the pop quiz\n\n";
			}
			else
			{
				std::cout << "You are no longer a student\n\n";
				return 0;
			}
		}
		std::cout << "\nYou didn`t get expelled, your parents are now proud of you. Props\n";
		return 0;
	}