/*
PATTERN - 109
261.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    E D C B A
      D C B A
        C B A
          B A
            A
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {   
        for(int j = 1;j<i;j++)
            cout<<" "<<" ";

        for(int k=n-i;k>=0;k--)
            cout<<(char)(k+65)<<" ";
            
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