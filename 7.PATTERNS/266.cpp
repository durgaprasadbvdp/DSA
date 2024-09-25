/*
PATTERN - 114
266.Write a program to print the following pattern:
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
	for(int i=1;i<=n;i++)
    {   
        for(int k = n-1;k>=i;k--)
            cout<<" ";

        for(int j = 1; j <= i ; j++)
            cout<<(char)(j+64)<<" ";
            
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