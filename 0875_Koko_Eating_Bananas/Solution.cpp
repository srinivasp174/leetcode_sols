class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        int res = r;

        while (l <= r) {
            int k = (l + r) / 2;
            long t = 0;
            for(int p : piles)
                t += (p - 1) / k + 1;
            if (t <= h) {
                res = k;
                r = k - 1;
            }
            else
                l = k + 1;
        }
        return res;
    }
};
