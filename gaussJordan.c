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

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j!=i){
				float r=ar[j][i]/ar[i][i];
				for(int k=0;k<n+1;k++){
					ar[j][k]=ar[j][k]-(r*ar[i][k]);
				}
			}
		}
	}

	for(int i=0;i<n;i++)
		printf("X%d: %6.0f\n",i,ar[i][n]/ar[i][i]);

	for(int i=0;i<n;i++){
		for(int j=0;j<n+1;j++){
			printf("%6.0f",ar[i][j]);
		}
		printf("\n");
	}

}
