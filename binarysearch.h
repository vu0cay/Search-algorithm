#include <bits/stdc++.h>
using namespace std;
typedef ... ElementType;
int binsearch(ElementType a[],int i,int j,ElementType x){
    int l = i, r = j, mid;
    while(r - l>1){
      mid = l - (l-r)/2;
      if(x > a[mid]) l = mid;
      else r = mid;
    }
  if(a[l] == x) return l;
  else return r;
}
