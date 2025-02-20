// page 73 ex. C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//page 73 ex. C
#include <stdbool.h>
#include <stdio.h>
#define x 5
bool isSort(int arr[])
{
	for (int i = 0; i < x-1; i++)
	{
		if (arr[i] > arr[i + 1])
			return false;
	}
	return true;
}
int main()
{
	int arr[x] = { 1,2,3,4,5 };
	if (isSort(arr))
		printf("the array is sort!!");
	else
		printf("the array is not sort!!");
}