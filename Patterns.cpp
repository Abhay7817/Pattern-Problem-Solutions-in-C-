#include<iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		cout<<"*"<<" ";
	 }
	cout<<endl;
	}
}
void nForest0(int n){
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void nTriangle(int n) {
	// Write your code here
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
    }
    cout<<endl;
    }
}
void triangle(int n){
    //Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void seeding(int n) {
	// Write your code here.
	for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
    cout<<endl;
	}
}
void nNumberTriangle(int n) {
    // Write your code here.
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
    cout<<endl;
    }
}
void nStarTriangle(int n) {
    // Write your code here.
int k=2*n-1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=(2*n-1);j++){
        if(j<(k/2)+1 || j>(2*n-1)-(k/2)){
            cout<<" ";
        } else {
        cout<<"*";
        }
    }
    cout<<endl;
    k=k-2;
}
}
void nStarTriangle0(int n) {
    // Write your code here.
int k=2*n-1;
int m=0, c=0;
for(int i=1;i<=n;i++){
    for(int j=k;j>0;j--){
        while(c<=m && c>0){
            cout<<" ";
            c++;
        }
    cout<<"*";
    }
    m++;
    c=1;
    k-=2;
    cout<<endl;
 }
}
void nStarDiamond(int n){
    // Write your code here.
   int k=2*n-1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=(2*n-1);j++){
        if(j<(k/2)+1 || j>(2*n-1)-(k/2)){
            cout<<" ";
        } else {
        cout<<"*";
        }
    }
    cout<<endl;
    k=k-2;
    }
k=2*n-1;
int m=0, c=0;
for(int i=1;i<=n;i++){
    for(int j=k;j>0;j--){
        while(c<=m && c>0){
            cout<<" ";
            c++;
        }
    cout<<"*";
    }
    m++;
    c=1;
    k-=2;
    cout<<endl;
    }
}
void nStarTriangleR(int n) {
    // Write your code here.
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=n-1;i>0;i--){
    for(int j=i;j>0; j--){
        cout<<"*";
    }
    cout<<endl;
}
}
void nBinaryTriangle(int n) {
    // Write your code here.
int a=0,b=1,c;
for(int i=1;i<=n;i++){
    if(i%2!=0){
        a=1;
        b=0;
        }
    for(int j=1;j<=i;j++){
        cout<<a<<" ";
        c=b;
        b=a;
        a=c;
    }
    cout<<endl;
}
}
void numberCrown(int n) {
    // Write your code here.
int l=2*n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=2*n;j++){
        if(j<=i){
            cout<<j;//<<" ";
        } else if(j>=l){
            cout<<(2*n+1)-j;//<<" ";
        } else{
        cout<<" ";
        }
    }
    l--;
    cout<<endl;
}
}
void nNumberTriangleI(int n) {
    // Write your code here.
int k=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
    }
}
void nLetterTriangle(int n) {
    // Write your code here.
int k=65;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<char(k)<<" ";
        k++;
    }
    k=65;
    cout<<endl;
}
}
void nLetterTriangle0(int n) {
    // Write your code here.
int k=65;
for(int i=n;i>0;i--){
    for(int j=1;j<=i;j++){
        cout<<char(k)<<" ";
        k++;
    }
    k=65;
    cout<<endl;
}
}
void alphaRamp(int n) {
    // Write your code here.
int k=65;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<char(k)<<" ";
    }
    k++;
    cout<<endl;
}
}
void alphaHill(int n) {
    // Write your code here.
int m=65; int k=n-1;
for(int i=1;i<=n;i++){
    for(int j=1;j<2*n;j++){
        if(j<=k || 2*n-j<=k){
            cout<<" ";
        }else{
        cout<<char(m)<<" ";
        if(j<n){
            m++;
        }
        else{
            m--;
        }
        }
    }
    m=65;
    k--;
    cout<<endl;
}
}
void alphaTriangle(int n) {
    // Write your code here.
int k=64+n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<char(k)<<" ";
        k--;
    }
    k=64+n;
    cout<<endl;
}
}
void symmetry(int n) {
    // Write your code here.
int k=n;
for(int i=1;i<=2*n;i++){
    for(int j=1;j<=2*n;j++){
        if(j<=k || 2*n-j<k){
            cout<<"*"<<" ";
        } else{
        cout<<"  ";
        }
    }
    if(i<n){
        k--;
    } else if(i>n){
    k++;
    }
    cout<<endl;
    }
}
void symmetry0(int n) {
    // Write your code here.
int k=1;
for(int i=1;i<=2*n;i++){
    for(int j=1;j<=2*n;j++){
        if(j<=k || 2*n-j<k){
            cout<<"* ";
        } else{
            cout<<" ";
            }
        }
    if(i<n){
        k++;
    }
    else{
        k--;
    }
    cout<<endl;
    }
}
void getStarPattern(int n) {
    // Write your code here.
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1 || i==n){
            cout<<"*";
        }else{
        if(j==1 || j==n){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
      }
    }
    cout<<endl;
}
}
void getNumberPattern(int n) {
    // Write your code here.
int m=n;
for(int i=1;i<=n;i++){
    for(int j=1;j<2*n;j++){
      if(i<=n){
        if(j<i){
            cout<<m;
            m--;
        } else if(2*n-j<i){
        m++;
        cout<<m;
        }else{
        cout<<m;
        }
      }
    }
    m=n;
    cout<<endl;
}
for(int i=n-1;i>0;i--){
    for(int j=1;j<2*n;j++){
         if(j<i){
                cout<<m;
                m--;
            } else if(2*n-j<i){
            m++;
            cout<<m;
            }else{
            cout<<m;
            }
        }
    m=n;
    cout<<endl;
}
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    //nForest(n);
    //nForest0(n);
    //nTriangle(n);
    //triangle(n);
    //seeding(n);
    //nNumberTriangle(n);
    //nStarTriangle(n);
    //nStarTriangle0(n);
    //nStarDiamond(n);
    //nStarTriangleR(n);
    //nBinaryTriangle(n);
    //numberCrown(n);
    //nNumberTriangleI(n);
    //nLetterTriangle(n);
    //nLetterTriangle0(n);
    //alphaRamp(n);
    //alphaHill(n);
    //alphaTriangle(n);
    //symmetry(n);
    //symmetry0(n);
    //getStarPattern(n);
    getNumberPattern(n);
    return 0;
}
