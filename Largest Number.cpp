bool cmp(string x,string y){
    return x+y>y+x;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string>v;
    for(int i=0;i<A.size();i++){
        v.push_back(to_string(A[i]));
    }
    
    sort(v.begin(),v.end(),cmp);
    
    string str;
    for(int i=0;i<v.size();i++){
        str=str.append(v[i]);
    }
    if(str[0]=='0')
        return "0";
    
    return str;
}
