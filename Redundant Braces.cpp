int Solution::braces(string A) {
    stack<char>s;
    int n=A.length();
    set<char> op;
    op.insert('+');
    op.insert('-');
    op.insert('*');
    op.insert('/');
    
    for(int i=0; i<n ;i++){
        if(A[i]=='(')
            s.push(A[i]);
        
        else if(A[i]=='+'|| A[i]=='-' || A[i]=='*' || A[i]=='/')
            s.push(A[i]);
            
        else if(A[i]==')'){
            if(op.end()==op.find(s.top()))
                return 1;
            else{
                s.pop();
                s.pop();
            }
        }
    }
    return 0;
}
