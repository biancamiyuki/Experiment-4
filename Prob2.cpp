#include<iostream>
using namespace std;

int main ()
{
	int size, arr[50], x, y, z;
	cout << "Selection Sorting..." << endl;
	cout << "Enter the array size: "; cin >> size;
	cout << "Enter the " << size << " elements: ";
	
	for(x=0;x<size;x++)
	{
		cin >> arr[x];
	}
	
	cout << "Your data: ";
	for (x=0;x<size;x++)
	{
		cout << arr[x] << " ";
	}
	
	for (x=0;x<size;x++)
	{
		for (y=x+1;y<size;y++)
		{
			if (arr[x] > arr[y])
			{
				z = arr[x];
				arr[x] = arr[y];
				arr[y] = z;
				
			}
		}
	}
	
	cout << "\nAfter using selection sort..\n";
	cout << "\nSorted data: ";
	for (x=0;x<size;x++)
	{
		cout << arr[x] << " ";
	}
	
	
	return 0;
}
