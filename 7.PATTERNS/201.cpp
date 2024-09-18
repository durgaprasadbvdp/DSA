/*
PATTERN - 49
201.Write a program to print the following pattern:
	I/P : n = 4
    O/P : 
    1
    4 9
    16 25 36
    49 64 81 100
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int x = 1;
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<x*x<<" ";
            x++;
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
