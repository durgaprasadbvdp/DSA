/*
PATTERN - 26
178.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    A A A A A
    B B B B B
    C C C C C
    D D D D D
    E E E E E
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    char i,j;
	for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
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
