typedef int Keytype;
typedef int othertype;
typedef struct{
	Keytype Key;
	othertype otherfields;
}recordtype;

void Swap(recordtype *x, recordtype *y){
	recordtype temp = *x;
	*x = *y;
	*y = temp;
}

void BubbleSort(recordtype a[], int n){
	int i,j;
	for(i=0;i<=n-2;i++){
		for(j=n-1;j>=i+1;j--){
			if(a[j].Key < a[j-1].Key){
				Swap(&a[j], &a[j-1]);
			}
		}
	}
}