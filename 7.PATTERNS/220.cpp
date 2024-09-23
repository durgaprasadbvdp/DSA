/*
PATTERN - 68
220.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    15 14 13 12 11
    10 9 8 7 
    6 5 4
    3 2
    1
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int x = (n * (n+1))/2;
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<= (n-i+1);j++)
        {
            cout<<x--<<" ";
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
