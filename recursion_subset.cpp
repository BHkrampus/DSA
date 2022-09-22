 #include<iostream>
 #include<vector>
 #include<string>
 using namespace std;

void rec(int n){
     if(n<0)
     return;
     cout<<"before "<<n<<endl;
     rec(n-1);
      cout<<"after "<<n<<endl;
}

int main(){
    // rec(5);
    string digit="234";
    cout<<digit<<endl;
      int i=0;
      i=digit[0]-'0';
      cout<<i<<endl;
    //   string value=digit[i];
   

    return 0;
}