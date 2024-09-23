/*
PATTERN - 69
221.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    1 1 1 1 1
    0 0 0 0
    1 1 1
    0 0
    1
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {
        for(int j=5;j>=i;j--)
        {
            cout<<(i%2)<<" ";
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
