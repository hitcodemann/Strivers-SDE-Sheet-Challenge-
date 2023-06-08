#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int maxLength = 0;
    for(int i=0;i<input.size();i++){
        int currLength = 0;
        int arr[26] = {0};
        for(int j=i;j<input.size();j++){
            int index = input[j]-'a';
            if(arr[index]!=0){
                break;
            }
           arr[index]++;
           currLength++;
           if(currLength > maxLength){
               maxLength = currLength;
           }
        
        }
    }
    return maxLength;
}
