#include<bits/stdc++.h>
using namespace std;

int getValue(vector<char> priority, char key){
  for(int i=0; i<priority.size(); i++) {
    if(priority[i] == key){
      return i ;
    }
  }
  return 0;
}

vector<vector<char>> getSetTree(vector<vector<char>> set, vector<char> priority) {
  int priority_len = priority.size();
  vector<vector<char>> resSet;
  vector<char> tmp ;

  for(int i=0; i<set.size(); i++) {
    for(int j=getValue(priority,set[i][set[i].size()-1])+1 ;j<priority_len+1 ;j++) {
      if(j==priority_len) {
        if(set[i][set[i].size()-1]==priority[priority_len-1]) {
          for(int x=0; x<set[i].size(); x++) {
            tmp.push_back(set[i][x]);
          }
        }
        else continue;
      }
      else {
        for(int x=0; x<set[i].size(); x++) {
          tmp.push_back(set[i][x]);
        }
        tmp.push_back(priority[j]);
      }

      resSet.push_back(tmp);
      tmp.clear();
    }
  }

  return resSet;
}



int main() {
  vector<vector<char>> subsetAll ;
  vector<char> priority, tmp;
  string s;
  cin >> s;
  int cnt = 1;

  for(int i=0; i<s.length(); i++) {
    priority.push_back(s[i]);
    tmp.push_back(s[i]);
    subsetAll.push_back(tmp);
    tmp.clear();
  }

  for(int i=0; i<s.length()-1; i++) {
    subsetAll = getSetTree(subsetAll, priority);
    for(int i=0; i<subsetAll.size(); i++) {
      for(int j=0; j<subsetAll[i].size(); j++){
        cout << subsetAll[i][j] ;
      }
      cout << " ";
    }
    cout << endl;
  }


}
