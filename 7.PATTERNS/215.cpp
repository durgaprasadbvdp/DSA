/*
PATTERN - 63
215.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
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
