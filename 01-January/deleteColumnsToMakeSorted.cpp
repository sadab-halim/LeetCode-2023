int minDeletionSize(vector<string> &strs){
    int rows = strs.size();
    int cols = strs[0].size();
    int count;

    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows - 1; j++){
            if(strs[j][i] > strs[j+1][i]){
                count++;
                break;
            }
        }
    }
    return count;
}