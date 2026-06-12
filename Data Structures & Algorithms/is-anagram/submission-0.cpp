//brute force approch 
// lets sort both adn check maequal or not edcase if not then directly not 
//eqials to 


/*
if(s.length()!=t.length()){
    return false;
}



        sort(s.begin(),s.end());


        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]){
                return false;

            }
        }
        return true;



    }*/
class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()){
    return false;
        }

int freq[26]={0};
for(char c:s){

    freq[c-'a']++;

}
for(char c:t){
    freq[c-'a']--;
}
for(int x:freq){
    if(x!=0){
        return false;
    }

}
return true;



    }
};