#include<iostream>
using namespace std;
#include<windows.h>
int main()
{
	int arr[4] = {1,2,3,4};
	int *a = arr;
	int *&p = a;
	p++;
	*p = 100;
	cout << *a << " " << *p << endl;
	for (int i = 0; i < 4;i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;

}
