    int minBitFlips(int start, int goal) {
        //XORing start and goal
        int ans = (start) ^ (goal);
        //the no of set bits in the ans is the no of flips required
        int flips = 0;
        //traverse ans and count no of set bits
        for(int i=0;i<31;i++)
        {
            if(ans&(1<<i)) flips++;
        }
        return flips;
    }
