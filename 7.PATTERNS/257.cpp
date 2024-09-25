/*
PATTERN - 105
257.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    1 2 3 4 5
      5 6 7 8
        8 9 10 
          10 11
            11
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int x = 1;
	for(int i=0;i<n;i++)
    {   
        for(int k=0;k<i;k++)
            cout<<" "<<" ";
            
        for(int j = n-1;j>=i;j--)
        {
            cout<<(x-i)<<" ";
            x++;
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