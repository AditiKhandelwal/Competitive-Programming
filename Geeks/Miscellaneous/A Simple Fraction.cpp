class Solution{
	public:
	string fractionToDecimal(int n, int d) {
	    // Code here
	    string ans="";
	    int sign = (n<0)^(d<0)?-1:1;
	    if(sign==-1){
	        ans+='-';
	    }
	    n= abs(n);
	    d=abs(d);
	    int q = n/d;
	    ans+=to_string(q);
	    int r = n%d;
	    if(r==0){
	        return ans;
	    }
	    ans+='.';
	    unordered_map<int,int> m;
	    bool repeat = false;
	    int start;
	    while(r>0 && repeat==false ){
	        if(m.find(r)!=m.end()){
	            repeat=true;
	            start=m[r];
	            break;
	        }
	        else{
	            m[r]=ans.length();
	        }
	        r=r*10;
	        q=r/d;
	        ans+=to_string(q);
	        r=r%d;
	    }
	    if(repeat==true){
	        ans+=')';
	        ans.insert(start,"(");
	    }
	    return ans;
	}
};