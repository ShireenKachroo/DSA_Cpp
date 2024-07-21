class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int score;  //stores maxSum
        int leftSum = 0, rightSum = 0;
        int n = cardPoints.size();
        for(int i=0;i<=k-1;i++){
            //compute leftsum considering first k size window
            leftSum += cardPoints[i];
        }
        score = leftSum; //at this point max sum is the sum of first window

        int rightIndex = n-1;
        for(int i=k-1;i>=0;i--){
            /*remove 1 ele from front window and add 1 ele from the back*/
            leftSum -= cardPoints[i];
            rightSum += cardPoints[rightIndex];
            rightIndex = rightIndex-1;
            score = max(score, (leftSum+rightSum));
        }
        return score;
    }
};
