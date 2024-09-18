/*
PATTERN - 52
204.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    0
    1 1
    0 0 0
    1 1 1 1 
    0 0 0 0 0
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<(i % 2)<<" ";
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
