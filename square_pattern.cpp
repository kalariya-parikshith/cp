#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
int main()
{
	int n,i,j=0;
	cin>>n;

	int maxInd = (n*2)-2;

	for(j = 0; j <= maxInd/2; j++){
		for(i = j; i <= (maxInd-j); i++){

			arr[j][i] = n-j;
			arr[i][maxInd -j] = n-j;
			arr[maxInd - j][maxInd -i] = n-j;
			arr[maxInd-i][j] = n-j;

		}
	}
	for(i = 0; i <= (maxInd); i++){
		for(j = 0; j <= (maxInd); j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}