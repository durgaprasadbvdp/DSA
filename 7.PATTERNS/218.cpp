/*
PATTERN - 66
218.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    5 6 7 8 9
    4 5 6 7
    3 4 5
    2 3
    1
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<= (n-i+1);j++)
        {
            cout<<(n-i+j)<<" ";
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
