/*
PATTERN - 77
229.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    E E E E E
    D D D D
    C C C
    B B
    A
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<char(i+64)<<" ";
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
