/*
PATTERN - 15
167.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    5 6 15 16 25
    4 7 14 17 24
    3 8 13 18 23
    2 9 12 19 22
    1 10 11 20 21
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int x,y;
	for(int i=1;i<=n;i++)
    {
        x = i;
        y = n-i+1;
        for(int j=1;j<=n;j++)
        {
            if(j % 2 == 0)
                cout<<x<<" ";
            else
                cout<<y<<" ";
            x = x + n;
            y = y + n;
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
