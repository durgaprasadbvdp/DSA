/*
PATTERN - 108
260.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    A A A A A
      B B B B
        C C C
          D D
            E 
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=0;i<=n;i++)
    {   
        for(int j = 1;j<=i;j++)
            cout<<" "<<" ";

        for(int k=1;k<=n-i;k++)
            cout<<(char)(i+65)<<" ";
            
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