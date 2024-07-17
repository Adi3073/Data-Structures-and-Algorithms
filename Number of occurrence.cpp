// Number of occurrence

int count(vector<int>& arr, int n, int x) {

    int ans=0;
    int l=0,r=n-1,ida=n;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]>=x){
            ida=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }

    if(ida<n && arr[ida]==x){
        int left=ida;
        l=ida,r=n-1;

        while(l<r){
            int mid=(l+r+1)/2;
            if(arr[mid]>x)
                r=mid-1;
            else
                l=mid;
        }

        int right=r;
        ans=right-left+1;
    }
    return ans;
}
