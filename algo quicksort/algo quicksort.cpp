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

	

int main()
{
   
}


