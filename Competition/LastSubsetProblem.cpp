#define m1 1000000007
#define m2 1000000006
#define mxn 100005
vector<int> pr(mxn,true);


void er(){
    pr[0]=false;
    pr[1]=false;
    for(int i=2;i<mxn;i++){
        if(pr[i]){
            int j=2;
            while(i*j<mxn){
                pr[i*j]=false;
                j++;
            }
            
        }
        
    }
    
}


int power(long long a,long long b, long long mod){
    long long res=1LL;
    while(b){
        if(b%2LL){
            res=((res%mod)*(a%mod)%mod);
            b--;
        }
        else{
            a=((a%mod)*(a%mod)%mod);
            b=b/2;
        }
    }
    
    return res;
}

int Solution::solve(vector<int> &A) {
    er();
    int n=A.size();
    long long val=power(2LL,n-1LL,1000000006LL);
    long long ans=1LL;
    
    for(int i=0;i<n;i++){
        if(pr[A[i]]){
            ans=((ans%m1)*(power(A[i],val,1000000007LL))%m1)%m1;
        }
    }
    return ans%m1;
}
