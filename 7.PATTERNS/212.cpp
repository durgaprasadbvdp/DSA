/*
PATTERN - 60
212.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    E
    D D
    C C C
    B B B B
    A A A A A
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    char i,j;
	for(i=n-1;i>=0;i--)
    {
        for(j=n;j>i;j--)
        {
            cout<<(char)(i+65)<<" ";
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
