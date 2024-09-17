/*
PATTERN - 10
162.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    1 1 2 1 3 1
    1 2 2 2 3 2
    1 3 2 3 3 3
    1 4 2 4 3 4
    1 5 2 5 3 5
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j<<" "<<i<<" ";
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
