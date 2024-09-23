/*
PATTERN - 79
231.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    E D C B A
    D C B A
    C B A
    B A
    A
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>=0;j--)
        {
            cout<<char(j+65)<<" ";
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