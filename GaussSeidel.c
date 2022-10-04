#include<stdio.h>

int main(){
	int n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	
	float ar[n][n+1];
	for(int i=0;i<n;i++){
		for(int j=0;j<n+1;j++){
			scanf("%f",&ar[i][j]);
		}	
	}
	int j=0;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			if(j!=i)
			sum+=abs(ar[i][j]);
		}
		if(a[i][i]<sum){
			printf("Can not find solution\n");
			return 0;
		}
	}

	

	
}
