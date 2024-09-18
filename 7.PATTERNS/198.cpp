/*
PATTERN - 46
198.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    2
    4 6
    8 10 12
    14 16 18 20
    22 24 26 28 30
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int x = 2;
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<x<<" ";
            x += 2;
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
