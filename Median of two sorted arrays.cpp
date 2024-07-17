// Median of two sorted arrays

double median(vector<int>& a, vector<int>& b) {
	// Write your code here.
int m=a.size();

int n=b.size();

if(n<m) 
  return median(b,a);

int l=0,h=m;

while(l<=h){
  int c1=(l+h)/2;
  int c2=((m+n+1)/2)-c1;
  int l1=INT_MIN,l2=INT_MIN;
  int r1=INT_MAX,r2=INT_MAX;
  if(c1<m)
    r1=a[c1];

  if(c2<n)
    r2=b[c2];

  if(c1-1>=0)
    l1=a[c1-1];

  if(c2-1>=0)
    l2=b[c2-1];
  
  if(l1<=r2 && l2<=r1){
    if((m+n)%2==1)
      return max(l1,l2);
    else
      return ((double)max(l1,l2)+(double)min(r1,r2))/2.0;
    }
  else if(l1>r2)
    h=c1-1;
  else
    l=c1+1;
  }
return 0;
}
