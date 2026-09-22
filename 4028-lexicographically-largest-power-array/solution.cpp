class Solution {
public:
    vector<int> largestPower(vector<int>& nums) {

        vector<vector<int>> blocks;
        blocks.push_back(nums);

        vector<int> power(15, 0);

        for (int bit = 14; bit >= 0; bit--) {

            int idx = 0;

            // Find the first block that contains a 0 at this bit
            while (idx < blocks.size()) {

                vector<int> ones, zeros;

                for (int x : blocks[idx]) {
                    if (x & (1 << bit))
                        ones.push_back(x);
                    else
                        zeros.push_back(x);
                }

                if (zeros.empty()) {
                    // Entire block has this bit set
                    power[14 - bit] += blocks[idx].size();
                    idx++;
                }
                else {
                    // This is the first block where the bit becomes 0
                    power[14 - bit] += ones.size();

                    vector<vector<int>> newBlocks;

                    // Keep previous blocks
                    for (int j = 0; j < idx; j++)
                        newBlocks.push_back(blocks[j]);

                    // Put 1s before 0s in this block
                    if (!ones.empty())
                        newBlocks.push_back(ones);

                    if (!zeros.empty())
                        newBlocks.push_back(zeros);

                    // Remaining blocks stay unchanged
                    for (int j = idx + 1; j < blocks.size(); j++)
                        newBlocks.push_back(blocks[j]);

                    blocks = newBlocks;
                    break;
                }
            }

            // Every remaining block has this bit set
            if (idx == blocks.size()) {
                // power was already counted
            }
        }

        return power;
    }
};
