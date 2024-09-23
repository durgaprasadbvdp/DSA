/*
PATTERN - 78
230.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    E D C B A
    E D C B
    E D C
    E D
    E
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=0;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<char(j+64)<<" ";
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
