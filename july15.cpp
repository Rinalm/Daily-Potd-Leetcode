class Solution {
public:
    bool isValid(string word) {
        //req 3 chars
        if(word.size() < 3){ // .size() & .length() , me diff kya hai?
            return false;
        }

        bool hasvowels = false;
        bool hasconso = false;

        for(char ch : word){ // & put kyo nhi kiye 
            // check alphabet chars
            if(isalpha(ch)){// Mistake; put parameter/element inside the function  
                //IMP: Conv all upper to lower for , one time trav & conditon 
                ch = tolower(ch);// update chars , all lowers

                // check vowels
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                    hasvowels= true;
                }
                // check consonants
                else{
                    hasconso = true;
                }

            }
            // check digits
            else if( !isdigit(ch) ){// if not digit
                return false;
            }
        }

        return hasvowels && hasconso;// both combine to give the word 
    }
};