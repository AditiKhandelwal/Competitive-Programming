//Function to find all the numbers with only 1,2 and 3 in their digits.
void findAll() {
    //code here
    string n ="";
    int flag =0;
    for(int i =1;i<=1000000;i++)
    {
        n = to_string(i);
        flag=1;
        for(int j =0;j<n.length();j++){
            if(n.at(j) == '1' || n.at(j) == '2' || n.at(j) == '3' ){
                continue;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag == 1){
            mp[i]=1;
        }
    }
    
}