#include<iostream>
#include<set>

using namespace std;
int cont(int r){
  int i=0;
  while(r){i++;r/=10;};
  return i;
}

bool confirmar(int q1,int q2){
  set<int> r;

  while(q1){
      r.insert(q1%10);
      q1/=10;
  }
  int i=0;
  while(q2){
    i++;
     r.insert(q2%10);
     q2/=10;
  }
  if(i==4)r.insert(0);
  if(r.size()==10 )return true;
  return false;
}


void solve(){

  int n;
  while(cin>>n){
    if(n==0)return;
    bool q=true;
    int aux=1;
    for(int i =1234;i<=49383;i++){
        aux=i*n;
        if(aux>98765)break;
        if(confirmar(aux,i)){
          if(cont(i)==4)
            cout<<aux<<" / 0"<<i<<" = "<<n<<endl;
          else
            cout<<aux<<" / "<<i<<" = "<<n<<endl;
          q=false;
        }
    }
    if(q)cout<<"There are no solutions for "<<n<<"."<<endl;
  }
}


int main(){

   int t=1;
  while(t--){
    solve();cout<<endl;
  }
  return 0;
}