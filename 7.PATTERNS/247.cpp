/*
PATTERN - 95
247.Write a program to print the following pattern:
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
	for(int i=0;i<n;i++)
    {   
        for(int j = n-1;j>i;j--)
            cout<<" "<<" ";
        
        for(int k=0;k<=i;k++)
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