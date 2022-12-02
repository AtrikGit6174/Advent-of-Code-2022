#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	/*
	A, X: Rock
	B, Y: Paper
	C, Z: Scissors
	*/

	char opp, me;
	int my_score= 0;

	while (cin>>opp>>me)
	{
		switch (me)
		{
			case 'X':
				my_score += 1;

				switch (opp)
				{
					case 'A':
						my_score += 3;
						break;
					case 'B':
						my_score += 0;
						break;
					case 'C':
						my_score += 6;
						break;
				}

				break;

			case 'Y':
				my_score += 2;

				switch (opp)
				{
					case 'A':
						my_score += 6;
						break;
					case 'B':
						my_score += 3;
						break;
					case 'C':
						my_score += 0;
						break;
				}

				break;

			case 'Z':
				my_score += 3;

				switch (opp)
				{
					case 'A':
						my_score += 0;
						break;
					case 'B':
						my_score += 6;
						break;
					case 'C':
						my_score += 3;
						break;
				}

				break;
		}
	}

	cout<<my_score;
}