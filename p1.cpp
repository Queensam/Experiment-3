#include<iostream>

using namespace std;

int main (){
	
    int arr[10], n, i, max, min;
    float num[70], sum=0, average;
    
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max << endl;
    cout << "Smallest element : " << min << endl;
    
    
    sum += arr[i];
    cout << "Sum of given array is: " << sum << endl;
    
   
    for(i = 0; i < n; ++i)
    {
        sum += arr[i];
    }
    average = sum / n;
    cout << "Average = " << average;
    
    
    return 0;
}
