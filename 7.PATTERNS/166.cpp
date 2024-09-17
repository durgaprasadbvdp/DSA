/*
PATTERN - 14
166.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    5 10 15 20 25
    4 9 14 19 24
    3 8 13 18 23
    2 7 12 17 22
    1 6 11 16 21
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int x;
	for(int i=1;i<=n;i++)
    {
        x = n-i+1;
        for(int j=1;j<=n;j++)
        {
            cout<<x<<" ";
            x = x + n;
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
