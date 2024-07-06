string FirstNonRepeating(string A){
		    unordered_map<char, int>count;  //stores char and its count
		    queue<int>q;  //to store characters of stirng
		    string ans = "";  //to store non-repeating character
		    
		    //traversing the i/p string and keeping track of occurrence of each character
		    for(int i=0;i<A.length();i++){
		        char ch = A[i];  
		        count[ch]++;
		        q.push(ch);
		        
		        while(!q.empty()){
		        if(count[q.front()] > 1) q.pop(); //popping repeated characters
		        else 
		        {
		            //pushing the unique element in ans
		            ans.push_back(q.front());
		            break;
		        }
		    }
		    if(q.empty()) ans.push_back('#'); //no unique character found
		}
		    
		return ans;
	}
