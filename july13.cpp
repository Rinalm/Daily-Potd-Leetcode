// Optimal : by mik 
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n= players.size();
        int m= trainers.size();

        int count =0;
        //sorting , see docs of applying the sorting in diff methods , ask to claude also 
        // M1;
        // sort(players.begin(), players.end());
        // sort(trainers.begin(), trainers.end());
        sort(begin(players), end(players));
        sort(begin(trainers), end(trainers));


        // 
        int i=0 , j=0;
        while( i<n && j<m){// if out of bound(Range)of arr , then stop working of loop
            // EDGE Case
            if(players[i] > trainers[j]){// ye Trainer kaam ka nhi hai
                j++;// move to next trainer , req big training capacity of trainer
            }
            else{// Matching occur : (players[i] <= trainers[j])
                count++;
                j++; i++;
            }
        }

        return count ;
    }
};