#include <bits\stdc++.h>
using namespace std;

int designerPdfViewer(int arr[26],string word){
    int max=0;
    for (int i=0;i<word.length();i++){
        int ind=(int)word[i]-97;
        if (arr[ind]>max){
            max=arr[ind];
        }
    }
    return word.length()*max;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[26];
    string word;
    for (int i=0;i<26;i++){
        cin >> arr[i];
    }
    cin >> word;
    cout << designerPdfViewer(arr,word);
    return 0;
}