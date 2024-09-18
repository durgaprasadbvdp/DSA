/*
PATTERN - 58
210.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    A
    A B
    A B C
    A B C D
    A B C D E
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
            cout<<(char)(j)<<" ";
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
