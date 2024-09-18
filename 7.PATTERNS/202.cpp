/*
PATTERN - 50
202.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    1
    1 2
    3 5 8
    13 21 34 55
    89 144 233 377 610
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int n1=0,n2=1;
    int r=n1+n2;
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<r<<" ";
            r = n1 + n2;
            n1 = n2;
            n2 = r;
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
