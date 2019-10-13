#include "Calculator.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char input = '\0';
	double returned_value;
	double secondValue = 154;
	bool first_digit = true;




	while (true)
	{
		input = _getch();

		//user input 0-9
		if ((input >= '0' && input <= '9'))
		{
			cout << input;
			first_digit = true;
			while (input >= '0' && input <= '9')
			{
				if (first_digit)
				{
					Calculator::clearValue();
					Calculator::addValue(input - '0');
					first_digit = false;
				}
				else
				{
					Calculator::multiplyValue(10);
					Calculator::addValue(input - '0');

				}
				input = _getch();
				if (input >= '0' && input <= '9')
				{
					cout << input;
				}
			}
		}

		//user input ‘X’: Exit the program (don’t output the character!)
		if (input == 'X' || input == 'x')
		{
			break;
		}
		//user input ‘C’: Clear the calculator (don’t output the character!)
		else if (input == 'C' || input == 'c')
		{
			Calculator::clearValue();
		}
		//user input ‘S’: Memory Store (don’t output the character!)
		else if (input == 'S' || input == 's')
		{
			Calculator::memory_storage();
		}
		//user input ‘R’: Memory Recall (don’t output the character!)
		else if (input == 'R' || input == 'r')
		{
			returned_value = Calculator::memory_recall();
			cout << returned_value << "\n> ";
		}
		//user input ‘M’: Memory Clear (don’t output the character!)
		else if (input == 'M' || input == 'm')
		{
			Calculator::clear_memory();
		}
		//user input ‘I’: Invert sign (don’t output the character!)
		else if (input == 'I' || input == 'i')
		{
			returned_value = Calculator::invert_value();
			cout << returned_value << "\n> ";
		}
		//user input ‘+’: Addition
		else if (input == '+')
		{
			cout << input;
			first_digit = true;
			input = _getch();
			cout << input;
			while (input != '\r')
			{
				if (first_digit)
				{
					secondValue = 0;
					secondValue = secondValue + (input - '0');
					first_digit = false;
				}
				else
				{
					secondValue *= 10;
					secondValue = secondValue + (input - '0');

				}
				input = _getch();
				cout << input;
			} // end while
			returned_value = Calculator::addValue(secondValue);
			cout << "\n" << returned_value << "\n> ";
		}
		//user input ‘-‘: Subtraction
		else if (input == '-')
		{
			cout << input;
			first_digit = true;
			input = _getch();
			cout << input;
			while (input != '\r')
			{
				if (first_digit)
				{
					secondValue = 0;
					secondValue = secondValue + (input - '0');
					first_digit = false;
				}
				else
				{
					secondValue *= 10;
					secondValue = secondValue + (input - '0');

				}
				input = _getch();
				cout << input;
			} // while
			returned_value = Calculator::subtractValue(secondValue);
			cout << "\n" << returned_value << "\n> ";
		}
		//user input ‘*’: Multiplication
		else if (input == '*')
		{
			cout << input;
			first_digit = true;
			input = _getch();
			cout << input;
			while (input != '\r')
			{
				if (first_digit)
				{
					secondValue = 0;
					secondValue = secondValue + (input - '0');
					first_digit = false;
				}
				else
				{
					secondValue *= 10;
					secondValue = secondValue + (input - '0');

				}
				input = _getch();
				cout << input;
			} // end while
			returned_value = Calculator::multiplyValue(secondValue);
			cout << "\n" << returned_value << "\n> ";
		}
		//user input ‘/’: Division
		else if (input == '/')
		{
			cout << input;
			first_digit = true;
			input = _getch();
			cout << input;
			while (input != '\r')
			{
				if (first_digit)
				{
					secondValue = 0;
					secondValue = secondValue + (input - '0');
					first_digit = false;
				}
				else
				{
					secondValue *= 10;
					secondValue = secondValue + (input - '0');

				}
				input = _getch();
				cout << input;
			} // end while
			returned_value = Calculator::divideValue(secondValue);
			cout << "\n" << returned_value << "\n> ";
		}
		//user input ‘^’: Power function
		else if (input == '^')
		{
			cout << input;
			first_digit = true;
			input = _getch();
			cout << input;
			while (input != '\r')
			{
				if (first_digit)
				{
					secondValue = 0;
					secondValue = secondValue + (input - '0');
					first_digit = false;
				}
				else
				{
					secondValue *= 10;
					secondValue = secondValue + (input - '0');

				}
				input = _getch();
				cout << input;
			} // end while
			returned_value = Calculator::power_value(secondValue);
			cout << "\n" << returned_value << "\n> ";
		}



	}
	return 0;
}
