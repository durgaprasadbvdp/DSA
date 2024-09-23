/*
PATTERN - 80
232.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    E D C B A
    F E D C
    G F E
    H G
    I
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<char(n-j+i+64)<<" ";
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