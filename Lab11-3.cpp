#include <iostream>
#include <string>
using namespace std;



int main()
{
	srand(time(nullptr));

	int a, b, i;
	int sum = 0;

	cout << "Please enter a size of the first array: ";
	cin >> a;
	cout << "Please enter a size of the second array: ";
	cin >> b;

	int* array1Elements = new int[a];
	int* array2Elements = new int[b];

	for (int i = 0; i < a; i++)
	{
		array1Elements[i] = rand() % 11;
	}
	for (int i = 0; i < b; i++)
	{
		array2Elements[i] = rand() % 11;
	}

	for (i = 0; i < a; i++)
	{
		cout << array1Elements[i] << " ";
	}
	cout << endl;
	for (i = 0; i < b; i++)
	{
		cout << array2Elements[i] << " ";
	}
	cout << endl;
	

	for (i = 0; i < b; i++) {
		if (array1Elements[1] == array2Elements[i]) {
			sum += 1;
		}
	}
	cout << "The second element of the first array appears " << sum << " times in the second array";
}