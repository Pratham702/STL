#include<bits/stdc++.h>
using namespace std;
//unordered map uses hash table while ordered map uses tree for traversal hence time complexity differs
//1.inbuilt implementation //it uses hash value 
//2.time complexity
//3.valid keys datatype
int main(){
unordered_map<int,string> m;
// unordered_map<pair<int,int>,string> a;//here we can't use complex data structure in keys, such as pair,vector ,sets as this doesn't contain any inbuilt hash value
m[2]="luck";//O(1)
m[1]="one";
m[4]="four";
for (auto &pr : m)
{
    cout<<pr.first<<" "<<pr.second<<endl;
}


}