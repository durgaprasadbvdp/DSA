/*
PATTERN - 65
217.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    5 4 3 2 1
    5 4 3 2
    5 4 3
    5 4
    5
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {
        for(int j=5;j>=i;j--)
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
