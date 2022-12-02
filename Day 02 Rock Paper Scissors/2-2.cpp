#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	/*
	A: Rock
	B: Paper
	C: Scissors
	
	X: lose
	Y: draw
	Z: win
	*/

	char opp, me;
	int my_score= 0;

	while (cin>>opp>>me)
	{
		switch (me)
		{
			case 'X':
				my_score += 0;

				switch (opp)
				{
					case 'A':
						my_score += 3;
						break;
					case 'B':
						my_score += 1;
						break;
					case 'C':
						my_score += 2;
						break;
				}

				break;

			case 'Y':
				my_score += 3;

				switch (opp)
				{
					case 'A':
						my_score += 1;
						break;
					case 'B':
						my_score += 2;
						break;
					case 'C':
						my_score += 3;
						break;
				}

				break;

			case 'Z':
				my_score += 6;

				switch (opp)
				{
					case 'A':
						my_score += 2;
						break;
					case 'B':
						my_score += 3;
						break;
					case 'C':
						my_score += 1;
						break;
				}

				break;
		}
	}

	cout<<my_score;
}