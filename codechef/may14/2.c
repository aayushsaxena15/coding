#include <stdio.h>
long long int find_largest(long long int A[], long size){
	long int largest =A[0],i;

	for(i=1;i<size;i++){
		if(largest < A[i])
			largest = A[i];
	}
	return largest;
}
int main(){
	long long int A[100000],K,j,largest =0, temp,prev_largest = 0;
	long N, i;                          
	char eof_chk;
	int flag = 0;

	scanf("%ld %lld",&N,&K);
	for(i=0;i<N;i++)
		scanf("%lld",&A[i]);
	largest = find_largest(A,N);
	for(j=1; j<=K; j++){
		largest = find_largest(A,N);
		for ( i = 0; i < N; i++ )
			A[i] = largest-A[i];
	}
	for(i=0;i<N;i++){
		if(i == (N-1)){
			printf("%lld",A[i]);    
		}           
		else
			printf("%lld ",A[i]);
	}
	printf("\n");
	return 0;
}
