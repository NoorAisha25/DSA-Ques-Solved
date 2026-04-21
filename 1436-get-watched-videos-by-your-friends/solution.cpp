class Solution {
public:
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos,
                                          vector<vector<int>>& friends,
                                          int id, int level) {
        int n = friends.size();
        vector<bool> visited(n, false);
        queue<int> q;

        q.push(id);
        visited[id] = true;

        int currLevel = 0;

        while (!q.empty() && currLevel < level) {
            int size = q.size();
            while (size--) {
                int node = q.front();
                q.pop();

                for (int f : friends[node]) {
                    if (!visited[f]) {
                        visited[f] = true;
                        q.push(f);
                    }
                }
            }
            currLevel++;
        }

        unordered_map<string, int> freq;

        while (!q.empty()) {
            int person = q.front();
            q.pop();

            for (auto &video : watchedVideos[person]) {
                freq[video]++;
            }
        }

        vector<pair<string,int>> temp(freq.begin(), freq.end());

        sort(temp.begin(), temp.end(), [](auto &a, auto &b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second < b.second;
        });

        vector<string> result;
        for (auto &p : temp) {
            result.push_back(p.first);
        }

        return result;
    }
};
