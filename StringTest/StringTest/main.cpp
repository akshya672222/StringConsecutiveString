//
//  main.cpp
//  StringTest
//
//  Created by AKSHAY SUNDERWANI on 20/09/17.
//  Copyright © 2017 AKSHAY SUNDERWANI. All rights reserved.
//

#include <iostream>
#include <stdio.h>

std::string noMoreOccurrences(std::string testString, int occurrence){
    char current = '\0';
    std::string newString = "";
    int i = 0;
    int count = 0;
    while (i < testString.length()) {
        if (current != testString[i]){
            current = testString[i];
            count = 0;
            newString += current;
//            int occur = (int)std::count(testString.begin(), testString.end(), current);
//            if(occur > occurrence){
//                newString += std::string(occurrence, current);
//            }else{
//                newString += std::string(occur, current);
//            }
//            i = i + occur;
        }else{
            if (count < occurrence){
                newString += current;
            }
        }
        count = count + 1;
        i = i + 1;
    }
    return newString;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout<<noMoreOccurrences("aaaabbbbbbcaaadddddd", 2)<<"\n";
    std::cout<<noMoreOccurrences("abbccccddddaaa", 3)<<"\n";
    std::cout<<noMoreOccurrences("abcdABCD", 4)<<"\n";
    std::cout<<noMoreOccurrences("aAaAbBbBBBbbbvVcC", 2)<<"\n";
    std::cout<<"Enter test string: \n";
    std::string testString = "";
    int occur = 0;
    std::cin>>testString;
    std::cout<<"Enter occurance count: \n";
    std::cin>>occur;
    //std::sort(testString.begin(), testString.end());
    std::cout<<"\n"<<noMoreOccurrences(testString, occur)<<"\n";
    return 0;
}
