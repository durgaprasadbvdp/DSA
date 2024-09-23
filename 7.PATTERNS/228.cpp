/*
PATTERN - 76
228.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    A B C D E
    A B C D
    A B C
    A B
    A
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<char(j+65)<<" ";
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
