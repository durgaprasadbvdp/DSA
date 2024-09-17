/*
PATTERN - 17
169.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    1 3 5 7 9
    3 5 7 9 11
    5 7 9 11 13
    7 9 11 13 15
    9 11 13 15 17
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int x;
	for(int i=1;i<=(2*n);i=i+2)
    {
        x = i;
        for(int j=1;j<=n;j++)
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
