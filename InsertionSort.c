typedef int Keytype;
typedef float othertype;
typedef struct{
	Keytype Key;
	othertype otherfields;
}recordtype;

void Swap(recordtype *x, recordtype *y){
	recordtype temp = *x;
	*x = *y;
	*y = temp;
}

void InsertionSort(recordtype a[], int n){
	int i,j;
	for(i=1;i<=n-1;i++){
		j = i;
		while((j > 0) && (a[j].Key < a[j-1].Key)){
			Swap(&a[j].Key, &a[j-1].Key);
			j--;
		}
	}
}