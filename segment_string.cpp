/******************************************************************************
Given a non-empty string input_string and a dictionary consisting of non-empty words
To determine whethe the string can be segmented into one or more words.
To return false if it cannot be segmented.
Time complextity: O(n*m) where n is the size of the string and m is the size of the dictionary
*******************************************************************************/
#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<string.h>
using namespace std;

vector<string> dictionary;
int main()
 {
   string input_string,word;
   int size_dict;
   cout<<"Enter the string: ";
   cin>>input_string;
   cout<<"Enter the size of the dictionary: "<<endl;
   cin>>size_dict;
   cout<<"Enter the words in the dictionary: "<<endl;
   for(int i=0;i<size_dict;i++)
     {
       cin>>word;
       dictionary.push_back(word);
     }

  int string_length = input_string.length();
  bool isTrue[string_length ];
  for(int i=0;i<string_length;i++)
    {
       isTrue[i] = false;
    }

     for(int i = 0;i < string_length; i++)
    {
       for(int j= 0;j<dictionary.size();j++)
        {
           int curWordLen = dictionary[j].length();
           string word = dictionary[j];
           string curr_substring = input_string.substr(i,curWordLen);
           if(i + curWordLen <= string_length)
              if(word.compare(curr_substring)==0)
            {
                isTrue[i+curWordLen]  = true;
            }
        }
    }
    for(int k = 0;k<string_length+1;k ++)
    {
       if(isTrue[k] ==true)
        {
            cout<<"The string can be segmented"<<endl;
            exit(0);
        }
    }
  cout<<"false";
  return 0;
 }
