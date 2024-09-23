/*
PATTERN - 75
227.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    A A A A A
    B B B B
    C C C
    D D
    E
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<char(i+65)<<" ";
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
