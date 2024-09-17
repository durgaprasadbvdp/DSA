/*
PATTERN - 24
176.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    0 1 0 1 0
    0 1 0 1 0
    0 1 0 1 0
    0 1 0 1 0
    0 1 0 1 0
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j % 2 == 0)
                cout<<"1"<<" ";
            else
                cout<<"0"<<" ";
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
