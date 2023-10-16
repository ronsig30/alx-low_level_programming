#include <stdio.h>
/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int add(int a, int b)
{
	return a + b;
}
/**
 * sub - Subtraction of two integers
 * @a: First int
 * @b: second int
 * Return: result of their subtraction
 */
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
/**
 * div - Divides two integers
 * @: first int
 * @b: second int
 * Return: Result of their division
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return a / b;
}
/**
 * mod - prints the modulo of two integers
 * @a: first int
 * @b: Second int
 * Return: result of their modulo
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return a % b;
}
