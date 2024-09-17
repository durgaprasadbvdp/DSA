/*
PATTERN - 11
163.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    1 1 1 2 1 3
    2 1 2 2 2 3
    3 1 3 2 3 3
    4 1 4 2 4 3
    5 1 5 2 5 3
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<i<<" "<<j<<" ";
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
