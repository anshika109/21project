#include<iostream>
using namespace std;
int main(){
string str;
char arr[10];
int j=0;
cout<<"enter string";
cin>>str;
int len=str.length();
for(int i=0;i<len;i++){
    if(str[i]=='('||str[i]=='{'||str[i]=='['){

        arr[++j]=str[i];
    }
    else if(str[i]==')'){
        if(arr[j]=='(')
        {
            j--;
        }
        else{
            cout<<"no";
            return 0;
        }
    }
    else if(str[i]=='}'){
        if(arr[j]=='{')
            {
            j--;
            }
            else
            {
                cout<<"no";
                return 0;
            }
    }
   else if(str[i]==']'){
        if(arr[j]=='['){
            j--;
        }
        else
        {
           cout<<"no";
                return 0;
        }

    }
}
if(j==0){
    cout<<"yes";
    }
else
    cout<<"no";
}
