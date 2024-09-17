/*
PATTERN - 7
159.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    1 3 5 7 9
    11 13 15 17 19
    21 23 25 27 29
    31 33 35 37 39
    41 43 45 47 49
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int k = 1;
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<k<<" ";
            k += 1;
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
