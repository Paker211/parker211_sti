#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    char selfNode;
    char nextNode;
    bool childNode;
};


int main() {
  vector<char> order;
  string s;
  cin >> s;
  vector<Node> node_vec;

  for(int i=0; i<s.length(); i++) {
    order.push_back(s[i]);
  }

  // set class
  for(int i=1; i<order.size(); i++) {
    for(int j=0 ;j<order.size()-i; j++) {

    }
  }

  /*
  for(int i=0; i<-1; i++) {
    obs[i].selfNode = order[i];
    obs[i].nextNode = order[i+1];
    obs[i].childNode = false;
  }
  obs[s.length()-1].selfNode = order[s.length()-1];
  obs[s.length()-1].childNode = true;
  */


  /*
  for(int i=0; i<order.size(); i++) {
    int cnt = 0;
    string s1 = "";
    while(1){
      if(!obs[i+cnt].childNode){
        s1 += obs[i+cnt].selfNode;
      }
      else {
        s1 += obs[i+cnt].selfNode;
        break;
      }
      cnt++ ;
    }
    cout << "s1: " << s1 << " ";
  }
  */


  //for(int i=0; i<order.size(); i++) {
  //  cout << order[i] << " ";
  //}
  //cout << endl;
  //cout << s << endl;




}
