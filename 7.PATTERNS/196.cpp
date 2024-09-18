/*
PATTERN - 44
196.Write a program to print the following pattern:
	I/P : n = 4
    O/P : 
    1
    3 2
    6 5 4
    10 9 8 7
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int k = 0;
	for(int i=1;i<=n;i++)
    {
        k += i;
        for(int j=k;j> k-i;j--)
        {
            cout<<j<<" ";
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
