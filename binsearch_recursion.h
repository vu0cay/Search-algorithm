void Binsearch(ElementType x, ElementType A[], int l, int r){
  if(l>r) return;
  
  int mid = l - (l-r)/2;
  if(A[mid] == x) return mid;

  if(A[mid] > x) Binsearch(x,A,l,mid);
else if(A[mid] < x) Binsearch(x,A,mid+1,r);

  return -1;
}
