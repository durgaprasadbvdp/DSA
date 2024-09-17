/*
PATTERN - 16
168.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    1 2 3 4 5
    2 3 4 5 6
    3 4 5 6 7
    4 5 6 7 8
    5 6 7 8 9
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int x;
	for(int i=1;i<=n;i++)
    {
        x = i;
        for(int j=1;j<=n;j++)
        {
            cout<<x<<" ";
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
