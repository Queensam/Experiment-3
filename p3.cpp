#include<iostream>
#include<string.h>

using namespace std;

char str[50], temp;
int a, b;

int main ()
{
    
    cout << "Enter a string: ";
    gets(str);
    
    b = strlen(str) - 1;
    
    for (a = 0; a < b; a++,b--)
    {
        temp = str[a];
        str[a] = str[b];
        str[b] = temp;
    }
    cout << "Reversed string: " << str;
    return 0;
}
