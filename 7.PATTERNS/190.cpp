/*
PATTERN - 38
190.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    5
    5 4
    5 4 3
    5 4 3 2 
    5 4 3 2 1
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<j<<" ";
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
