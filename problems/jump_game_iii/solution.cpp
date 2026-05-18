class Solution {
private:
    bool solve(int start, vector<int>& arr, vector<int>& visited){
        if(start < 0 || start >= arr.size()) return false;

        //to check we do not stuck in a loop of same values
        if(visited[start]) return false;
        if(arr[start] == 0) return true;
        visited[start] = true;
        return (solve(start + arr[start], arr, visited) || solve(start - arr[start], arr, visited));
    }
public:
    bool canReach(vector<int>& arr, int start) {
        vector<int> visited(arr.size(), false);
        return solve(start, arr, visited);
    }
};