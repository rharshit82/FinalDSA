vector<int> countBits(int n) {
        vector<int> res(n+1);
        res[0]=0;
        for(int i=1; i<=n; i++){
            res[i] = res[i/2] + i%2;
        }
        return res;
    }

0 --> 0
	1 --> 1
	2 --> 10
	3 --> 11
	4 --> 100
	5 --> 101