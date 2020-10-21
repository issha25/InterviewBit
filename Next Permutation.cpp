vector<int> Solution::nextPermutation(vector<int> &A) {
    vector<int> res;
    if(next_permutation(A.begin(),A.end()))
        for(int i=0;i<A.size();i++)
            res.push_back(A[i]);
    else{
        sort(A.begin(),A.end());
        return A;
    }
        
    return res;
}
