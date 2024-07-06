class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    
    int tour(petrolPump p[],int n)
    {
       //initialising the deficit,balance petrol, starting pos as 0
       int deficit = 0;
       int bal = 0;
       int start = 0;
       //traversing the entire array
       for(int i=0;i<n;i++)
       {
           //balance = balance + current's petrol - current's distance
           bal += p[i].petrol - p[i].distance;
           if(bal < 0)
           {
               //-ve balance ---> deficiency of petrol
               deficit += bal;
               start = i+1;
               bal = 0;
           }
       }
       //if petrol is positive / petrol is remaining-->circular tour completed
       if(deficit + bal >= 0) return start;
       return -1;//impossible to complete circular tour
    }
};
