#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int cmp(const void *a, const void *b) {
 return (*(int*)a-*(int*)b);
}

int main() {
 int n, l[2000], cnt, i, j, k;
 scanf("%d", &n);
 while(n) {
  cnt=0;
  for(i=0; i<n; i++) scanf("%d", &l[i]);
  qsort(l, n, sizeof(int), cmp);
  for(k=n-1; k>1; k--) {
   i=0; j=k-1;
   while(i<j) {
    if(l[k]>(l[i]+l[j])) { cnt+=j-i; i++; }
    else j--;
   }
  }
  printf("%d\n", cnt);
  scanf("%d", &n);
 }
 return 0;
}
