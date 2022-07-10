#include<bits/stdc++.h>
using namespace std;

int main(){
map<int,multiset<string>> m;
int n;
cin>>n;

for (int i = 0; i < n; ++i)
{
	string str;
	int marks;
	cin>>str>>marks;
	m[-1*marks].insert(str);

}
for(auto &marksStudents:m){
	auto &students=marksStudents.second;
	int marks=marksStudents.first;
for(auto  stu:students){
	cout<<stu<< " "<< (-1*marks)<<endl;
}
}
}