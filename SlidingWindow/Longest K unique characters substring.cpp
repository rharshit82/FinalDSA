int longestKSubstr(string s, int k) {
        int n=s.size();
       int res=0;
       int i=0;
       int j=0;
       map<char,int> mp;
       while(j<n){
           mp[s[j]]++;
           if(mp.size()<k){
               j++;
           } else if(mp.size()==k){
               res=max(res,j-i+1);
               j++;
           } else{
               while(mp.size()>k and i<n){
                   mp[s[i]]--;
                   if(mp[s[i]]==0){
                       mp.erase(s[i]);
                   }
                   i++;
               }
               if(mp.size()==k){
                   res = max(res,j-i+1);
               }
               j++;
           }
       }
       return res==0? -1: res;
    }