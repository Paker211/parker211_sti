#include<bits/stdc++.h>
using namespace std;

vector<vector<char>> getAllSubsets(vector<char> set) {
  vector<vector<char>> subset;
  vector<char> empty ;
  subset.push_back(empty);

  for(int i=0; i<set.size(); ++i){
    vector<vector<char>> subsetTemp = subset;
    for(int j=0; j<subsetTemp.size(); ++j) {
      subsetTemp[j].push_back(set[i]);
    }
    for(int j=0; j<subsetTemp.size(); ++j) {
      subset.push_back(subsetTemp[j]);
    }
  }
  return subset;
}

vector<vector<char>> getSetTree(vector<char> set) {
  vector<vector<char>> subset;
  vector<char> setTemp;

  for(int i=0; i<set.size(); i++) {
    for(int j=i+1; j<set.size(); j++) {
      setTemp.push_back(set[i]);
      setTemp.push_back(set[j]);
      subset.push_back(setTemp);
      setTemp.clear();
    }
  }

  return subset;
}



int main() {
  vector<vector<char>> subsetAll ;
  vector<char> priority;
  string s;
  cin >> s;

  for(int i=0; i<s.length(); ++i) {
    priority.push_back(s[i]);
  }


  subsetAll = getSetTree(priority);
  for(int i=0; i<subsetAll.size(); i++) {
    for(int j=0; j<subsetAll[i].size(); j++){
      cout << subsetAll[i][j] << " ";
    }
    cout << endl;
  }


}

