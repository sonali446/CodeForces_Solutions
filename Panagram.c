#include<stdio.h>

int main(){

    int n,flag=0;
    scanf("%d",&n);

    char str[n+1];

    scanf("%s",str);
    int arr[26]={0};
    

    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=65&&str[i]<=90){
            str[i]=str[i]+32;
        }
    }
    

  

    for(int i=0;str[i]!='\0';i++){
        arr[str[i]-97]+=1;
    }

for(int i=0;i<26;i++){
    if(arr[i]==0){
        printf("NO");
        flag=1;
        break;
    }
    
}

if(flag==0){
    printf("YES");
}


    return 0;
}

/*
// CPP program to Check if a
// point lies on or inside a rectangle | Set-2
#include <bits/stdc++.h>
using namespace std;

// function to find if given point
// lies inside a given rectangle or not.
bool FindPoint(int x1, int y1, int x2,
			int y2, int x, int y)
{
	if (x > x1 and x < x2 and y > y1 and y < y2)
		return true;

	return false;
}

// Driver code
int main()
{
	// bottom-left and top-right
	// corners of rectangle
	int x1 = 0, y1 = 0, x2 = 10, y2 = 8;

	// given point
	int x = 1, y = 5;

	// function call
	if (FindPoint(x1, y1, x2, y2, x, y))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}

*/


