#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int MAX_CHAR = 26;

int countDistinct(string input[], int n) {
int countDist = 0; // Initialize result
 
        // Create an empty set and store all distinct
        // strings in it.
        set<string> s;
        char temp[50];
        
        for(int i = 0; i < n; i++) {
            // If this encoding appears first time, increment
            // count of distinct encodings.
              char char_array[input[i].length()+1];
              strcpy(char_array, input[i].c_str());
              int hashEven[MAX_CHAR];
              int hashOdd[MAX_CHAR];
              strcpy(temp,char_array);

            int m=input[i].length()+1;  
            for (int i = 0; i < m; i++) {
            char c = temp[i];
            if ((i & 1) != 0) // If index of current character is odd
                hashOdd[c-'a']++;
            else
                hashEven[c-'a']++;
 
        }
        string encoding = "";
        for (int i = 0; i < MAX_CHAR; i++) {
            encoding += (hashEven[i]);
            encoding += ('-');
            encoding += (hashOdd[i]);
            encoding += ('-');
        }


            if (s.find(encoding) == s.end()) {
                s.insert(encoding);
                countDist++;
            }
        }
 
        return countDist;
}
int main() {
        
        int j;
        cin>>j;
        string i[j];
        for(int k=0;k<j;k++)
        {
            cin>>i[k];
        }
 
        cout << countDistinct(i, j) << "\n";
    }