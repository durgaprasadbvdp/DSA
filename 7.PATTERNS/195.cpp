/*
PATTERN - 43
195.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    1
    3 5
    5 7 9
    7 9 11 13 
    9 11 13 15 17 
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int t;
	for(int i=1;i<=n;i++)
    {
        t = i - 1;
        for(int j=1;j<=i;j++)
        {
            cout<<(t+i)<<" ";
            t += 2;
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
