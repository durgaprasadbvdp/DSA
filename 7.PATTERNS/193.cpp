/*
PATTERN - 41
193.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    1
    2 3 
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int k = 1;
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
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
