long long getSubstringWithEqual012(string str)
{
    //code here.
  map<pair<int,int>,int> m;
  m[make_pair(0,0)]=1;
  int c0=0,c1=0,c2=0;
  long long int sum=0;
   for(int i=0;i<str.length();i++){ 
       if(str[i]=='0') 
        c0++;
        if(str[i]=='1') 
        c1++;
        if(str[i]=='2') 
        c2++; 
        pair<int,int> tmp=make_pair(c0-c1,c1-c2);
        sum=sum+m[tmp];
         m[tmp]++;
}

return sum;
}