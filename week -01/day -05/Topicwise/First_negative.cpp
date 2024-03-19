vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    long long l=0,r=0,cur=0;
    vector<long long> v;
    while(r<N) {
        if(r-l+1==K) {
            if(cur==0) {
                if(A[r]<0) cur = A[r];
            }
            else if(l>0 && cur==A[l-1]) {
                cur = 0;
                for(int i=l;i<=r;i++) {
                    if(A[i]<0) {
                        cur = A[i];
                        break;
                    }
                }
            }
            r++;
            l++;
            v.push_back(cur);
        }
        else {
            if(A[r]<0 && cur==0) cur = A[r];
            r++;
        }
    }
    return v;
 }