//count negative number in array not using linear only binary
int fun(vector<int>arr,int n){
    int f=0,l=n-1,res=-1;
    while(f<=l){
        int m=f+(l-f)/2;
        if(arr[m]<0){
            res=m;
            l=m-1;
        }
        else{
            f=m+1;
        }
    }
}