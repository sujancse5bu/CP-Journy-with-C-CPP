#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
string Zero_baad(string a)
{
    int c=0;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]=='0') c++;
        else break;
    }
    for(int i=0,j=c;j<a.size();i++,j++){
        a[i]=a[j];
    }
    a.resize(a.size()-c);
    return a;
}
string addition(string c, string d)
{
    string e="";
    reverse(c.begin(),c.end());
    reverse(d.begin(),d.end());
    if(c.size()>d.size()) for(int i=d.size();i<c.size();i++) d+='0';
    if(c.size()<d.size()) for(int i=c.size();i<d.size();i++) c+='0';
    int k=0;
    for(int i=0;i<d.size();i++){
        int x=c[i]-48,y=d[i]-48;
        char z;
        x+=(y+k);
        k=x/10;
        z=x%10+48;
        e+=z;
    }
    if(k>0){
        char z=k+48;
        e+=z;
    }
    reverse(e.begin(),e.end());
    return e;
}
string subtraction(string a, string b)
{
    string c,d,e="";
    int flag=0;
    if(a.size()>b.size()) c=a,d=b;
    else if(a.size()<b.size()) c=b,d=a,flag=1;
    else{
        for(int i=0;i<a.size();i++){
            if(a[i]>b[i]){
                c=a,d=b;
                flag=1;
                break;
            }
            else if(a[i]<b[i]){
                c=b,d=a;
                flag=1;
                break;
            }
        }
        if(!flag){
            return "0";
        }
    }
    reverse(c.begin(),c.end());
    reverse(d.begin(),d.end());
    if(c.size()>d.size()) for(int i=d.size();i<c.size();i++) d+='0';
    if(c.size()<d.size()) for(int i=c.size();i<d.size();i++) c+='0';
    int k=0;
    for(int i=0;i<d.size();i++){
        int x=c[i]-48,y=d[i]-48;
        char z;
        if(x>=y+k) x-=(y+k);
        else{
            x=(x+10)-(y+k);
            k=1;
        }
        z=x%10+48;
        e+=z;
    }
    if(flag) e+='-';
    reverse(e.begin(),e.end());
    return e;
}
string smultiplication(string a, int b)
{
    string c="";
    int k=0;
    for(int i=a.size()-1;i>=0;i--){
        int x;
        x=b*(a[i]-48)+k;
        k=x/10;
        char s=((x%10)+48);
        c+=s;
    }
    if(k>0){
        char s;
        s=k+48;
        c+=s;
    }
    reverse(c.begin(),c.end());
    return c;
}
string multiplication(string a, string b)
{
    string m,k;
    reverse(b.begin(),b.end());
    for(int i=0;i<b.size();i++){
        int n=b[i]-48;
        if(i==0){
            m=smultiplication(a,n);
        }
        else{
            k=smultiplication(a,n);
            for(int j=0;j<i;j++){
                k+='0';
            }
            m=addition(m,k);
        }
    }
    m=Zero_baad(m);
    return m;
}
bool is_prime(int a)
{
    if(a%2==0) return false;
    for(int i=3;i<=sqrt(a);i+=2){
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
    string a,b;
    int n;
    cout<<"\t\tWelcome to addition,subtraction and multiplication calculator.\n\t Press 1 to add\n\t Press 2 to subtract\n\t Press 3 to multiply\n\t Press 4 to check that if the number is prime\n";
    cin>>n;
    if(n==1){
        cout<<"Enter 2 numbers\n ";
        cin>>a>>b;
        if(a[0]=='-'&&b[0]=='-'){
            for(int i=0;i<a.size()-1;i++){
                a[i]=a[i+1];
            }
            for(int i=0;i<b.size()-1;i++){
                b[i]=b[i+1];
            }
            b.resize(b.size()-1);
            a.resize(a.size()-1);
            cout<<"The ans is "<<'-'<<addition(a,b);
        }
        else if(a[0]=='-'){
            for(int i=0;i<a.size()-1;i++){
                a[i]=a[i+1];
            }
            a.resize(a.size()-1);
            cout<<"The ans is "<<subtraction(b,a);
        }
        else if(b[0]=='-'){
            for(int i=0;i<b.size()-1;i++){
                b[i]=b[i+1];
            }
            b.resize(b.size()-1);
            cout<<"The ans is "<<subtraction(a,b);
        }
        else cout<<"The ans is "<<addition(a,b);
    }
    else if(n==2){
        cout<<"Enter 2 numbers\n ";
        cin>>a>>b;
        if(a[0]=='-'&&b[0]=='-'){
             for(int i=0;i<a.size()-1;i++){
                a[i]=a[i+1];
            }
            a.resize(a.size()-1);
            for(int i=0;i<b.size()-1;i++){
                b[i]=b[i+1];
            }
            b.resize(b.size()-1);
            cout<<"The ans is "<<subtraction(b,a);
        }
        else if(a[0]=='-'){
            for(int i=0;i<a.size()-1;i++){
                a[i]=a[i+1];
            }
            a.resize(a.size()-1);
            cout<<"The ans is -"<<addition(a,b);
        }
        else if(b[0]=='-'){
            for(int i=0;i<b.size()-1;i++){
                b[i]=b[i+1];
            }
            b.resize(b.size()-1);
            cout<<"The ans is "<<addition(a,b);
        }
        else{
            cout<<"The ans is "<<subtraction(a,b);
        }
    }
    else if(n==3){
        cout<<"Enter 2 numbers\n ";
        cin>>a>>b;
        if(a[0]=='-'&&b[0]=='-'){
            for(int i=0;i<a.size()-1;i++){
                a[i]=a[i+1];
            }
            a.resize(a.size()-1);
            for(int i=0;i<b.size()-1;i++){
                b[i]=b[i+1];
            }
            b.resize(b.size()-1);
            cout<<"The ans is "<<multiplication(a,b);
        }
        else if(a[0]=='-'){
            for(int i=0;i<a.size()-1;i++){
                a[i]=a[i+1];
            }
            a.resize(a.size()-1);
            cout<<"The ans is -"<<multiplication(a,b);
        }
        else if(b[0]=='-'){
            for(int i=0;i<b.size()-1;i++){
                b[i]=b[i+1];
            }
            b.resize(b.size()-1);
            cout<<"The ans is -"<<multiplication(a,b);
        }
        else cout<<"The ans is "<<multiplication(a,b);
    }
    else if(n==4){
        cout<<"Enter the number\n ";
        cin>>n;
        if(is_prime(n)) cout<<n<<" is a prime number\n";
        else cout<<n<<" is not a prime number\n";
    }
    return 0;
}
