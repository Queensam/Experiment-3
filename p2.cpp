#include<iostream>
using namespace std;
int main()
{
	
	int arr [22], a=1, b=1, c=1, i;
	
	cout<< "Enter all temperature for a week of Province A, Province B and then Province C."<< endl;
	
	for (i = 1; i < 22; i++)
		{
			cin>> arr [i];
		}
	
	for (i = 1; i < 8; i++)
		{
			cout<< "Province A, day "<< a << ": " << arr [i]<< endl;
			a++;
		}
	
	for (i = 8; i < 15; i++)
		{
			cout<< "Province B, day "<< b << ": " << arr [i]<< endl;
			b++;
		}
		
	for (i = 15; i < 22; i++)
		{
			cout<< "Province C, day "<< c << ": " << arr [i]<< endl;
			c++;
		}
	
return 0;
	
}
