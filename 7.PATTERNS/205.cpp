/*
PATTERN - 53
205.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    1
    1 0
    1 0 1
    1 0 1 0
    1 0 1 0 1
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<(j % 2)<<" ";
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
