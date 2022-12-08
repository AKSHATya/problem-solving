#include<bits/stdc++.h>
using namespace std;

int len(char s[]);
void convert(char s[]);
int pal(char s[],int l);
void rev(char [],int l);
void concatenate(char s1[],char s2[]);
int compare(char s1[],char s2[]);

/*int main(){
    char s[100];
    cin.getline(s,100);

    int l=len(s);
    cout<<"Length is: "<<l<<endl;


    convert(s);


    int t=pal(s,l);
    if(t)
        cout<<"PALINDROME\n";
    else
        cout<<"NOT PALINDROME\n";

    rev(s,l);
    return 0;
}*/
/*int len(char s[]){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}
void convert(char s[]){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='A'&&s[i]<='Z')
        s[i]+=32;
        else if(s[i]>='a'&&s[i]<='z')
        s[i]-=32;
        i++;
    }
    cout<<s<<endl;
}
int pal(char s[],int l){
    int i;
    for( i=0;i<l;i++){
        if(s[i]!=s[l-i-1])
            return 0;
    }
    return 1;
}
void rev(char s[],int l){
    string r="";
    for(int i=l-1;i>=0;i--)
        r=r+s[i];

    cout<<r<<endl;
}*/

void concatenate(char s1[],char s2[]){
    int i=0,j=0;
    char s3[100];
    while(s1[i]!='\0'){
        s3[j]=s2[i];
        i++;
        j++;
    }
    j--;
    i=0;
while(s2[i]!='\0'){
        s3[j]=s2[i];
        i++;
        j++;
    }
    cout<<s3<<endl;
}

int main(){

char s1[100],s2[100];
    cin.getline(s1,100);
    cin.getline(s2,100);
    
    concatenate(s1,s2);
    
    return 0;
} 