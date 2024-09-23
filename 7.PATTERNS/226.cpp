/*
PATTERN - 74
226.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    1 0 1 0 1
    0 1 0 1
    1 0 1
    0 1
    1
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=5;i>=1;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<(i+j)%2<<" ";
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
