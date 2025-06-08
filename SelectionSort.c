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

void SelectionSort(recordtype a[], int n){
	int i,j,lowindex;
	Keytype lowkey;
	for(i=0;i<=n-2;i++){
		lowkey = a[i].Key;
		lowindex = i;
		for(j=i+1;j<=n-1;j++){
			if(a[j].Key < lowkey){
				lowkey = a[j].Key;
				lowindex = j;
			}
		}
		Swap(&a[i], &a[lowindex]);
	}
}