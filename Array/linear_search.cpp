#include<iostream>

using namespace std;

int search(int A[], int N, int key)
{
	for (int i = 0; i < N; i++){
		if (A[i] == key)
			return i;
	    
    }
    return -1;
    
}

// Driver code
int main()
{
	int A[] = { 2, 3, 4, 10, 40 };
	int key = 40;
	int N = sizeof(A) / sizeof(A[0]);

	// Function call
	int result = search(A, N, key);
	if (result == -1)
		cout << "Element is not present in array" << endl;
	else 
        cout << "Element is present at index " << result << endl;
	return 0;
}
