/*
PATTERN - 59
211.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    E
    E D
    E D C
    E D C B
    E D C B A
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
