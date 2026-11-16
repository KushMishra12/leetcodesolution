class Solution {
public:
    string digitSum(string s, int k) {
    //     vector<int>v;
    //     int n=stoi(s);
    //     while(n>0){
    //         int rem=n%10;
    //         v.push_back(rem);
    //         n=n/10;
    //     }
    //     reverse(v.begin().v.end());
        while(s.length()>k){
            int sum=0;
            string str;
            int c=0;
            for(int i=0;i<s.length();i++){
                sum+=s[i]-'0';
                c++;
                if(c==k){
                    str += to_string(sum);
                    c=0;
                    sum=0;
                }
            }
                if(c>0){
                str += to_string(sum);
                }
            s=str;
        }
       return s; 
    }
};