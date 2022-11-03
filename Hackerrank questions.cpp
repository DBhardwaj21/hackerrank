// Hacker rank c++


// for loop
/*
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a,b;
    
    cin>>a;
    cin>>b;
    for(int n=a;n<=b;n++) {
        if (n<=9) {
            if (n == 1) {
                 cout << "one" << endl;
             } else if (n == 2) {
                 cout << "two" << endl;
            } else if (n == 3) {
                cout << "three" << endl;
            } else if (n == 4) {
                cout << "four" << endl;
            } else if (n == 5) {
                cout << "five" << endl;
            } else if (n == 6) {
             cout << "six" << endl;
            } else if (n == 7) {
                cout <<"seven" << endl;
             } else if (n == 8) {
                cout << "eight" << endl;
             } else if (n == 9) {
                 cout << "nine" << endl;
            }
        }
    else if(n%2==0) {
        
            cout<<"even" << endl;
        }
        else{
            cout<<"odd"<< endl;
        } 
    
    }    
        
    
    
    }
    
 */ 


//  function return max value
/*#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    if (a>b && a>c && a>d) {
      return a;
    }
    else if (b>a && b>c && b>d) {
      return b;
    }
    else if (c>b && c>a && c>d) {
      return c;
    }
    else (d>a && d>b && d>c); {
      return d;
    }
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}*/
    
int n;
cout<<"Enter n" <<endl;
cin>> n;
for(int i=0;i<10;i++){
    int num=pow(2,i);
    // cout<<num <<endl;
    if(n==num){
        return true;
    }

}
return false;


int n;
 cout<<"Enter the number yu want to change to the binary digit" <<endl;
 cin>>n;
 int ans=0;
 int i=0;
 while(n!=0){
     int bit =n%10;
     if(bit==1){
      ans = (bit * pow(2,i))+ ans;
    
     }
     
     n=n/10;
     i++;

 }
 cout<<ans <<endl;


