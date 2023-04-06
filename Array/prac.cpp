

#include <iostream>
using namespace std;

int main()
{
	int arr[20] = { 12, 16, 20, 40, 50, 70 };
	int capacity = sizeof(arr) / sizeof(arr[0]);
	int n = 6;
	int i, key = 26;

if (n >= capacity)
		return n;

arr[n] = key;

return (n + 1);

cout << n;

	return 0;
}

// This code is contributed by SHUBHAMSINGH10
