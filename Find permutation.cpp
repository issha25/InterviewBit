vector<int> Solution::findPerm(const string A, int B) {
    vector<int> v;
    int large=B;
    int small=1;
    for(int i=0;i<A.length();i++){
        if(A[i]=='I'){
            v.push_back(small);
            small++;
        }
        else{
            v.push_back(large);
            large--;
        }
    }
    //loop runs n-1 times because it's length is one less so for last no we will run one extra time.
    if(A.size()-1=='I')
       v.push_back(small); 
    else
        v.push_back(large);
    return v;
}
