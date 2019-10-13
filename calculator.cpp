#include "Calculator.hpp"

namespace Calculator
{
	double currentValue = 0.0f;
	double memoryValue = 0.0f;

	//set current input value to zero:
	void clearValue()
	{
		currentValue = 0.0;
	}

	//adds new value to current value (0.0)
	double add_New_Value(double new_Value)
	{
		currentValue = currentValue += new_Value;
		return currentValue;
	}

	//subtracts a value to the current value of the calculator:
	double sub_Value(double new_Value)
	{
		currentValue = currentValue -= new_Value;
		return currentValue;
	}

	//divide value
	double div_Value(double new_Value)
	{
		currentValue = currentValue / new_Value;
		return currentValue;
	}

	//multipy value:
	double multiply_Value(double new_Value)
	{
		currentValue = currentValue * new_Value;
		return currentValue;
	}

	//put current value into memory:
	void storage_to_memory()
	{
		memoryValue = currentValue;
		return currentValue;
	}

	//recall memory value from storage:
	double recall_memory()
	{
		currentValue = memoryValue;
		return currentValue;
	}

	//clear memory value:
	void clear_memory()
	{
		memoryValue = 0.0f;
	}

	//inverse the current value and return inverse value:
	double inverse_value()
	{
		currentValue = currentValue * (-1);
		return currentValue;
	}

	//uses an exponent to raise the number to the exponent
	double power_value(double newValue)
	{
		currentValue = pow(currentValue, newValue);
		return currentValue;
	}
}
