/*
PATTERN - 31
183.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    A B C D E
    B C D E F
    C D E F G
    D E F G H
    E F G H I
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<char(i+j+65)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
	int n;
	cout<<"Enter the input number"<<endl;
	cin>>n;
	patternPrint(n);
return 0;
}
