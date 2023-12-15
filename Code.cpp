class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> source;
        //store all the sources in the string
        for(const auto& path:paths){
            source.insert(path[0]);
        }
        for(const auto& path:paths){
            string dest=path[1];
            if(source.find(dest)==source.end()){
                return dest;
            }
        }
        return "";
    }
};
