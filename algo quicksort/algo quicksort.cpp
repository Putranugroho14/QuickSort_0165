#include <iostream>
using namespace std;

//array of integers to hold value
int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;
 
void input() {   
	while (true)
	{
		cout << "Masukan panjang element array : ";   
		cin >> n;                                    

		if (n <= 20) {                                
			break;
		}
		else
		{
			cout << "\nMaksimum panjang array adalah 20" << endl;
		}
	}
	cout << endl;                                
	cout << "===================" << endl;     
	cout << "Enter Array Element" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++) 
	{
		cout << " < " << (i + 1) << " > ";  
		cin >> arr[i];          
	}
}

//swaps the element at index x with the element at index y
void swap(int x, int y)
{
	int temp = arr[x];
	arr[x] = arr[y];

}
int main()
{
   
}


