/*
PATTERN - 39
191.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    5
    4 5
    3 4 5
    2 3 4 5
    1 2 3 4 5
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=n;i>=1;i--)
    {
        for(int j=i;j<=n;j++)
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
