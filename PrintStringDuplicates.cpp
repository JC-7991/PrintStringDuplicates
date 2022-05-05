#include <iostream>
#include <bits/stdc++.h>

void printDups(std::string str){

  std::map<char, int> count;
  
  for(int i = 0; i < str.length(); i++){
    count[str[i]]++;
  }
 
  for(auto it : count){
    
    if(it.second > 0){
      std::cout << it.first << " : count = " << it.second << "\n";
    }

  }

}

int main(){

  std::string str;
  std::cout << "Enter a string: ";

  std::cin.clear();
  getline(std::cin, str);

  printDups(str);
  
  return 0;

}