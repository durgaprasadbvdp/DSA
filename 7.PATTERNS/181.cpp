/*
PATTERN - 29
181.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    E D C B A
    E D C B A
    E D C B A
    E D C B A
    E D C B A
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    char i,j;
	for(i='E';i>='A';i--)
    {
        for(j='E';j>='A';j--)
        {
            cout<<char(j)<<" ";
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
