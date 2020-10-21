void reverse(vector<int> &v){
    int sz=v.size();
    int i=0,j=sz-1;
    while(i<j){
        swap(v[i],v[j]);
        i++;j--;
    }
}





void Solution::rotate(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(A[i][j],A[j][i]);
        }
    }
    for(int i=0;i<n;i++)
        reverse(A[i]);
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
