/*801
 #include <iostream>
using namespace std;
long int swapbyPointer(long int x, long int y){
 x=*(&y);
    return x;
}
int main(){
long int a, b;
cin>>a>>b;
cout<<swapbyPointer(a, b)<<" "<<swapbyPointer(b, a);

return 0;}
*/



/*802
#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int arr[100];
    int *arr2=arr;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        cout<<arr2[i];
    }
    return 0;
}*/



/*803
#include <iostream>
#include <cstring>
using namespace std;
const int MAX=20;
int countAccurance(char arr[MAX], char* ch){
int count=0;
int arrLenght = strlen(arr);
for(int i=0; i<arrLenght; i++){
if(arr[i]==*ch){//count elements
    count++;
}}
return count;}

int main(){
    int n;
    cin>>n;
    char ch1;
    char str1[MAX];
for(int i=0;i<n;i++){
    cin>>ch1>>str1;
cout<<countAccurance (str1, &ch1)<<" "<<ch1<<" in"<<" "<<str1<<endl;}
return 0;}
*/



/*804
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    char x[100];
    char *p=x;
    cin >>x;
    for (int i=0; i<strlen(x); i++){
        if (isalpha(*(p+i)) >0){
            cout<< *(p+i);}
    }
}*/



/*806
#include <iostream>
using namespace std;
void inputArr(int* a, int n){
  for (int i=0; i < n; i++) {
    cin >> *(a + i);
  }
}
void outputODD(int* a, int n) {
  for (int i = 0; i < n/2; i++) {
  cout << *(a + (2*i))<<" ";
  }//odd possition
}
void outputEVEN(int* a, int n) {
  for (int i = 1; i <= n/2; i++) {
  cout << *(a + (2*i)-1)<<" ";
  }//even possition
}
int main() {
    int n;
    cin>>n;
    int* arr= new int[n];
    inputArr(arr,n);
    outputODD(arr, n);
    outputEVEN(arr, n);
    delete[] arr;
    return 0;}
*/



/*807
#include <iostream>
#include <cstring>
using namespace std;
void sumbetwzeroes() {
    int a;
    cin >>a;
    for (int i=0; i<a; i++) {
        int* p =new int;
        cin>> *p;
        if (*p == 0){
            int sum=0;
            for (int b=0; b<a; b++){
                cin>> *p;
                sum += *p;
                if (*p==0){
                    cout<<sum<<endl;
                    return;}
            }
        }
    }
}
int main() {
    sumbetwzeroes();
}*/



/*808
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int* ptr = new int[100];
    int n, max= -100, maxNum =0, sum =0;
    cin>>n;
    for (int i=0; i<n; i++){
        cin >> ptr[i];
        if (ptr[i] >= max){
            max= ptr[i];
            maxNum= i;}
    }
    for (int i=0; i<maxNum; i++){
        if (ptr[i] > 0){
            sum += ptr[i];}
    }
    cout<<sum;
    return 0;
}*/



/*809
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* mass = new int[n];
    for (int i=0; i<n; i++)
    {
        cin>>mass[i];
    }
    int min =mass[0], minIndex = 0;
    int max =mass[0], maxIndex = 0;
    for (int i=1; i<n; i++){
        if (min> mass[i]){
            min= mass[i];
            minIndex= i;
        }
        if (max< mass[i]){
            max= mass[i];
            maxIndex = i;
        }
    }
    int sum=0;
    for (int i= minIndex+1; i< maxIndex; i++){
        if (mass[i] %2 ==0)
            sum++;
    }
    cout<<sum;
}*/



/*810
#include <iostream>
#include <cstring>
using namespace std;
void equalityofStrings(string *first, string* second) {
    if(*first==*second){
        cout<<"YES";}
    else{
        cout<<"NO";}
    }
int main(){
    string first, second;
    cin>>first>>second;
    equalityofStrings(&first, &second);
    return 0;
}*/



/*811
#include <iostream>
#include <cstring>
using namespace std;
int checkPalindrom(string a){
   int n=a.length();
   int count=0;
   for(int i=0; i<n/2; i++){
       if(a[i]==a[n-i-1]){
           count++;}
   }
   return count;
}
int main() {
string a;
cin>>a;
int n=a.length();
if(checkPalindrom(a)==n/2){
    cout<<"YES";}
else{
    cout<<"NO";}
return 0;
}
*/


/*812
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char a[26];
    cin>>a;
    int n;
    int* k= &n;
    cin>> *k;
    for (int i=0; i<strlen(a); i++)
        if (a[i] >='A' && a[i]<= 91){
            if (a[i]- *k >='A'){
                a[i] = a[i] - *k;
            }
            else{
                a[i] = a[i] - *k + 26;
            }
        }
    for (int i=0; i<strlen(a); i++)
        cout << a[i];
}*/



/*
#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    char dots;
    int *p1 =&a, *p2 =&b, *p3 =&c, *p4 =&d;
    cin>>*p1>>dots>>*p2>>dots>>*p3>>dots>>*p4;
    if ((*p1 >= 0 and *p2 < 256) and (*p2 >= 0 and *p2 < 256)
        and (*p3 >= 0 and *p3 < 256) and (*p4 >= 0 and *p4 < 256))
        cout<<"1";
    else {cout<<"0";}
}*/




/*814
#include <iostream>
using namespace std;
string dir;
int step;
int ala(){
    int ptr1=0, ptr2=0;
    int* s;
    int* e;
    while (cin >> dir >> step){
        if (dir == "North"){
            ptr1 += step;
        }
        if (dir == "East"){
            ptr2 +=step;
        }
        if (dir == "West"){
            ptr2 -=step;
        }
        if (dir == "South"){
            ptr1 -=step;
        }
        if (!cin){
            break;
        }
    }
    s =&ptr2;
    e =&ptr1;
    cout<<*s<<' '<<*e;
}
int main() {
    ala();
}*/



/* 815
#include <iostream>
using namespace std;
    unsigned sumDigits(int n) {// to find sum of digits
    unsigned sum = 0;
    while (n != 0) {
        sum += n % 10;//find sum
        n /= 10;//for every time change n by deleting last digit
    }

    return sum;
}
int isLuckyTicket(int number) {
    int firstHalf = number / 10000;//condition for find firsthalf
    int secondHalf = number % 10000;//condition for find secondhalf
int count=0;
    if(sumDigits(firstHalf) == sumDigits(secondHalf)){
        count++;
    }
    return count;
}
void countLucky(int a, int b){
    int n=0;
    for(int i = a;i<=b;i++)
    { //find amount of lucky tickets for a certain period
        if(isLuckyTicket(a)>0)
        { //if counter in function not zero it is Lucky
        n++; //counter
        }
        a++;
    }
    cout << n << endl;
}
int main()
{
    int x, y;
    cin >> x >> y;
countLucky(x,y);
}*/





#include <iostream>
using namespace std;
bool checkIfPositive(int a){
   cout<<"Checking if positive\n";
   return a>0;
}

int main() {
   int x = -5, y = -2;
   if (checkIfPositive(x)|| checkIfPositive(y)){
      cout<<"at least one of them is positive";
   }

   return 0;
}

