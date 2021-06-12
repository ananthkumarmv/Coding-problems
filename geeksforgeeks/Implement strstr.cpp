/*Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. The function returns and integer denoting the first occurrence of the string x in s (0 based indexing).

 

Example 1:

Input:
s = GeeksForGeeks, x = Fr
Output: -1
Explanation: Fr is not present in the
string GeeksForGeeks as substring.  */



/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
     //Your code here
     int c=0,k=0;
     for(int i=0;i<s.size();i++){
         if(s[i]==x[k]){
             c++;
             k++;
             if(c==x.size()){
                 return i-x.size()+1;
             }
         }
         else{
             k=0;
             c=0;
         }
     }
     return -1;
}
