
#include <bits/stdc++.h>
using namespace std;
void printUnion(int arr1[],int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			cout << arr1[i++] << " ";

		else if (arr2[j] < arr1[i])
			cout << arr2[j++] << " ";

		else {
			cout << arr2[j++] << " ";
			i++;
		}
	}

	while (i < m)
		cout << arr1[i++] << " ";

	while (j < n)
		cout << arr2[j++] << " ";
}
int main()
{
    int c,d;
    cin>>c>>d;
	int a[c];
	int b[d];
	for(int i=0;i<c;i++){
	    cin>>a[i];
	
	}
	for(int i=0;i<d;i++){
	    cin>>b[i];
	
	}
	

	int m = sizeof(a) / sizeof(a[0]);
	int n = sizeof(b) / sizeof(a[0]);
	printUnion(a, b, m, n);

	return 0;
}
