 char s[100];
    cin.getline (s,10);
    stringstream ss(s);
    string word;
    vector<string> v;
    while(ss >> word)
        v.push_back(word);
    for(int i=0; i<v.size(); i++){
        int n=v[i].size();
        for(int j=0; j<n; j++){
            v[i][j]+=n;
        }
    }
    string res;
    for(int i=0; i<v.size(); i++){
        res+= v[i]+ " ";
    }
    res.pop_back();
    cout<<res;    