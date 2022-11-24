/*901
#include <iostream>
#include <cstring>
using namespace std;

const int size = 100;
int findindex(char arr[100], char a, char b) {
    int n=0;
    for (int i = 0; i < 100; i++)
        if(*(arr + i) == 'a' || *(arr + i) == 'A')
            n=i;

    return n;
}

int findsubString(char* arr, int n) {
    int is=0;
    for (int i = n; i < strlen(arr); i++) {
        if ((*(arr + i) == 'A' || *(arr + i) == 'a') && (*(arr + i + 1) == 'I' || *(arr + i + 1) == 'i') && (*(arr + i + 2) == 'T' || *(arr + i + 2) == 't') && (*(arr + i + 3) == 'U' || *(arr + i + 3) == 'u')) {
            is=1;}
    }
    return is;
}

int main() {
    char* str = new char[1000];
    cin >> str;
    char a='a';
    char b='A';
    int n=findindex(str, a,b);
    if (findsubString(str,n)==1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    delete[] str;
    return 0;
}*/



/*902
#include <iostream>
#include <cstring>
using namespace std;
const int size = 100;
template <class T>
void replace(T* arr, T a, T b) {
    for (int i = 0; i < strlen(arr); i++) {
        if (*(arr + i) == b) {
            *(arr + i) = a;
        }
        cout<<*(arr + i);
    }}
int main() {
    char* str = new char[1000];
    cin.getline(str,1000);
    replace(str,'.', '!');
    delete[] str;
    return 0;
}*/



/*903
#include<iostream>
#include<cstring>
using namespace std;
void addSpace(char* arr)
{
    int size = strlen(arr)-1;
    for (int i = size; i >=0; i--)
    {
        if ((i+1) % 3== 0)
        {
            cout<<" ";
        }
        cout<<arr[size-i];
    }
}
int main()
{
    char* num = new char[1000];
    cin.getline(num, 1000);
    addSpace(num);
}*/




/*904
#include <iostream>
#include <cstring>
using namespace std;
template <class T>
void findLast(T* a, T* sub) {
    int n;
    for (int i = 0; i < strlen(a); i++)
    {
        if (*(a+ i) == ' ')

            n = i;
    }
    for (int i = n + 1; i <strlen(a); i++)
    {
        sub=a;
        if (islower(*(sub + i)))
            *(sub + i) = toupper(*(sub + i));
        if (isalpha(*(sub+ i)))
            cout << *(sub + i);
    }
    cout << " ";
}

int main()
{
    char word[1000];
    char str[1000];
    cin.getline(str, 1000);
    findLast(str, word);
    return 0;
}*/




/*905
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
template <class T>
void inputArray(T* a, int n) {
    for (T* it = a; it != a + n; it++)
        cin >> *it;
}
template <class T>
void outputArray(T* a, int n) {
    for (T* it = a; it != a + n; it++)
        cout << *it << endl;
}
void getNotCommon(char** a, int n) {
    unsigned counter, max = 0;
    for (int i = 0; i < n; i++) {
        counter = 0;
        for (int j = 0; j <=i; j++) {
            if (strcmp(a[i], a[j]) == 0)
                counter++;}//count how many times word appear before it
        if(counter==1)//cout only if ones
            cout<<a[i]<<" ";

    }
}
unsigned countTokens(char* s, const char* del = " ") {
    char* copy = new char[strlen(s) + 1];
    strcpy(copy, s);//copy the char cause token change it
    unsigned counter = 0;
    char* token = strtok(copy, del);
    while (token != NULL) {
        counter++;//count every word
        token = strtok(NULL, del);
    }

    delete[] copy;
    return counter;
}

void fillTokens(char* source, char** dest, const char* del = " ") {
    int k = 0;
    char* token = strtok(source, del);
    while (token != NULL) {
        dest[k++] = token;//fill new one dimention array with words(tokens)
        token = strtok(NULL, del);
    }
}

int main() {
    char* sentence = new char[1001];
    cin.getline(sentence, 1001);
    unsigned size = countTokens(sentence);
    char** words = new char* [size];
    fillTokens(sentence, words);
    getNotCommon(words, size);
    delete[] words;
    delete[] sentence;
    return 0;
}*/




/*907
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
char* longestInteger( char* str, int l)
{
    int count = 0, max = 0, pos = -1, pre_pos, pre_len, len = 0;
    char* num=new char[strlen(str)+1];
    for (int i = 0; i < l; i++) {
        pre_pos = pos;
        pre_len = len;
        count = 0;
        len = 0;
        if (isdigit(*(str+i))){
            pos = i;}//difine staring point
        while (isdigit(*(str+i))) {
            count++;//count lenght of number
            i++;
            len++;
        }
        if (count > max) {
            max = count;
        }//find max lenght of number
        else {
            pos = pre_pos;
            len = pre_len;
        }//if not found any digits
    } int j=0;
    for (int i = pos; i <= pos+len; i++) {
        *(num+j)=*(str+i);//index of last digir is first plus lenght of it
        j++;
    }
    return num;
}
template <class T>
void addSpace(T* arr)
{
    int size = strlen(arr)-1;
    for (int i = size; i >=0; i--)
    {
        if ((i+1) % 3== 0)
        {
            cout << " ";
        }//output with adding space
        cout<<*(arr+size-i);
    }}
int main()
{
    char* str = new char[1000];
    cin.getline(str,1000);
    int l = strlen(str);
    addSpace(longestInteger(str, l));

    return 0;
    }*/




/*908
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool Isless(char* a,char* b){
    int len1=strlen(a);
    int len2=strlen(b);
    if(len1<len2) return true;//at first compare lenght of they
    if(len1>len2) return false;
    //if it equal compare with strcmp
    return strcmp(a,b)<0;
}

int main() {
    char* a = new char[101];
    char* b = new char[101];
    char* c = new char[101];
    cin>>a>>b>>c;
    char* max = a;//identify max as a, then compare with others
    if(Isless(max,b)) max=b;
    if(Isless(max,c)) max=c;
    cout <<max << endl;
    delete[] a;
    delete[] b;
    delete[] c;
    return 0;
}*/




/*908
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
    string strsum = "";
    int n1 = str1.length(), n2 = str2.length();
    reverseStr(str1);
    reverseStr(str2);
//-48 to change char for number
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-48)+(str2[i]-48)+carry);
        strsum.push_back(sum%10 + 48);
        carry = sum/10;//carry if sum of to digits more than 10
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-48)+carry);
        strsum.push_back(sum%10 + 48);
        carry = sum/10;
    }
    if (carry)
        strsum.push_back(carry+48);
    reverseStr(strsum);//get back order of our digits

    return strsum;
}

int main()
{
    string str1, str2;
    cin>>str1>>str2;
    cout << findSum(str1, str2);
    return 0;
}*/




/*909
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
long int DiffOfsumDigits(char *a) {
    long int sumodd = 0, sumeven=0;
    long int diff=0;
    for (int i =0; i<strlen(a); i++) {
        if(i%2==0 || i==0){
            sumodd+= ((*(a+i))-48);}
        else {
            sumeven+= ((*(a+i))-48);
        }
        //if Differents of digits in even pos and odd pos are 0 or dividibill
        // to 11 this number Divisibil to 11
    }
    return sumeven-sumodd;
}

void findDivisibility(long int a,int b){
    if(a%b==0||a==0)
        cout<<"YES";
    else
        cout<<"NO";
}
int main(){
    char* a= new char[1000000];
    cin.getline(a,1000000);
    findDivisibility(abs(DiffOfsumDigits(a)),11);
    return 0;
}*/




/*910
#include <iostream>
#include<string>
using namespace std;
int frequency_Substr(string str,string substr)
{
    int count=0;
    for (int i = 0; i <str.size()-1; i++)
    {
        int m = 0;
        int n = i;
        for (int j = 0; j < substr.size(); j++)
        {
            if (str[n] == substr[j])
            {
                m++;
            }
            n++;
        }
        if (m == substr.size())
        {
            count++;
        }

    }
    return count;
}
int main()
{
    string x, y,z;
    cin >> x;
    y=">>-->";
    z="<--<<";

    cout<<frequency_Substr(x, y)+frequency_Substr(x, z);
    return 0;
}*/




/*911
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    int s=n*m;
    char* a = new char[250];
    for (int i =0; i<s; i++) {
        if(n%2==0 && m%2!=0){ //even odd
            if(i%2==0){
                *(a+i)='X';}
            else {
                *(a+i)='.'; }
        }
        else if(n%2!=0 && m%2!=0) {//odd odd
            if(i%2==0){
                *(a+i)='.';}
            else {
                *(a+i)='X'; }
        }
        else if(n%2!=0 && m%2==0){//odd even
            if(i<m){
                if(i%2==0)
                    *(a+i)='.';
                else *(a+i)='X';
            }
            else if(i%m==0 && (i/m)%2==1)
                *(a+i)='X';
            else if(i%m==0 && (i/m)%2==0)
                *(a+i)='.';
            else {
                if(*(a+i-1)=='.')
                    *(a+i)='X';
                if(*(a+i-1)=='X')
                    *(a+i)='.';}
        }

        else {//even even
            if(i<m){
                if(i%2==0)
                    *(a+i)='X';
                else *(a+i)='.';
            }
            else if(i%m==0 && (i/m)%2==1)
                *(a+i)='.';
            else if(i%m==0 && (i/m)%2==0)
                *(a+i)='X';
            else {
                if(*(a+i-1)=='.')
                    *(a+i)='X';
                if(*(a+i-1)=='X')
                    *(a+i)='.';}
        }  }

    for (int i=0; i<s; i++) {
        if(i%m==0 && i+1>m){
            cout<<endl; }
        cout<<*(a+i);}
    delete[] a;
    return 0;
}*/




/*912
#include <iostream>
#include <cstring>
using namespace std;
float getAveragelenghtofWord( char* a){
    float word = 0, length = 0;
    bool t=false;
    for (int i = 0; i < strlen(a); i++){
        if(isalpha(a[i])){
            t = true;
            length++;//count only letters
        }
        else{
            if(t)
            {
                word++;//count words
            }
            t = false;//return the average length
        }
    }
    return length/word;}
int main(){
    char* s = new char[100];
    cin.getline(s,100);
    cout.precision(9);
// The returned value must be accurate
// to within a relative or absolute value of 10 in pow -9.
    cout<<getAveragelenghtofWord(s);
    delete[] s;
}*/


/* task1
#include <iostream>
using namespace std;
int main (){
    int arr[100][100],n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    int res;
    int count;
    for(int i=0; i<n; i++) {
        count=0;
        for (int j = 0; j < 3; j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(count>1){
            res++;
        }
    }
    cout<<res;
}*/



/*task 2
#include <iostream>
using namespace std;
bool chk_Pangram(string s) {
    int Arr[26] = { 0 };
    for (int i = 0; i < s.length(); i++)
    {
        // check for uppercase
        if (isupper(s[i])){
            Arr[ s[i] - 'A' ]++;
        }
            // check for lowercase
        else if (islower(s[i]))
        {
            Arr[ s[i] - 'a' ]++;
        }
    }
    // check for the presence
    for (int i = 0; i < 26; i++){
        if(Arr[i] == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int n;
    char ch[26];
    cin>>n>>ch;
    string S = ch;
    if (chk_Pangram(S) == true)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}*/



/* task3
#include <iostream>
using namespace std;
int main()
{
    int n, temp, s=0, res=0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> temp;
        if(temp > 0)
            s += temp;
        else if(temp < 0)
            if(s > 0)
                --s;
            else
                res++;
    }
    cout << res;
    return 0;
}*/


