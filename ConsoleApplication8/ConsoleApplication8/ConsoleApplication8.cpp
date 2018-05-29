// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"


/*
int s();


int main()
{
	int m();
	printf("a");

	s();


	return 0;
}


int s()
{
	printf("b");
	return 0;
}

int ExampleForLoop()
{
	int num, count, sum = 0;

	printf("Enter a positive integer: ");
	scanf_s("%d", &num);

	// for loop terminates when n is less than count
	for (count = 1; count <= num; ++count)
	{
		sum += count;
	}

	printf("Sum = %d", sum);

	return 0;
}
*/


// function to return sum of elements
// in an array of size n
int sum(int arr[], int n)
{
	int s = 0; // initialize sum

				 // Iterate through all elements 
				 // and add them to sum
	for (int i = 0; i < n; i++)
		s += arr[i];

	return s;
}

int main()
{
	int arr1[] = { 12, 3, 4, 15 };
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	printf("Sum of given array is %d", sum(arr1, n1));
	int result = sum(arr1, n1);
	return result;

}

