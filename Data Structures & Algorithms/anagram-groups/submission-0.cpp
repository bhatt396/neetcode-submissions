class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


//ok we have to   comparing taking each and comparing will take n sq k log k
// optimization is hash map 
//basically what we do is we take sort array element take this as key --->put value as it 
//is so key is for diffrent the key same they group each other 

unordered_map<string ,vector<string>>mp;
for(auto s:strs){

string copy=s;

sort(copy.begin(),copy.end());


mp[copy].push_back(s);

}



vector <vector<string>>ans;


for(auto i:mp)
{
ans.push_back(i.second);
}

return ans;



        
    }
};
