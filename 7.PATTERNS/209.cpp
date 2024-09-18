/*
PATTERN - 57
209.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    A
    B B
    C C C
    D D D D
    E E E E E
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    char i,j;
	for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            cout<<(char)(i)<<" ";
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
