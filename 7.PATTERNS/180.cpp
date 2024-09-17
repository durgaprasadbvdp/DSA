/*
PATTERN - 28
180.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    E E E E E
    D D D D D
    C C C C C
    B B B B B
    A A A A A
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
            cout<<char(i)<<" ";
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
