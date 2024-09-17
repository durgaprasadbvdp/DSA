/*
PATTERN - 8
160.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    2 4 6 8 10
    12 14 16 18 20
    22 24 26 28 30
    32 34 36 38 40
    42 44 46 48 50
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int k = 2;
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<k<<" ";
            k += 2;
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
