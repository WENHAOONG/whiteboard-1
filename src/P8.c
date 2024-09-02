//#include <stdio.h>
//#include <ctype.h>
//
//#define MAX_CHAR 256  
//
//
//void countCharacters(const char str[], int count[]) {
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (isalpha(str[i])) {  
//            char lowerChar = tolower(str[i]);  
//            count[(int)lowerChar]++;
//        }
//    }
//}
//
//int areAnagrams(const char str1[], const char str2[]) {
//    int count1[MAX_CHAR] = { 0 };
//    int count2[MAX_CHAR] = { 0 };
//
//    countCharacters(str1, count1);
//    countCharacters(str2, count2);
//
//    for (int i = 0; i < MAX_CHAR; i++) {
//        if (count1[i] != count2[i]) {
//            return 0;  
//        }
//    }
//    return 1;  
//}
//
//int main() {
//    const char str1[] = "book";
//    const char str2[] = "koob";
//
//    if (areAnagrams(str1, str2)) {
//        printf("The strings are anagrams.\n");
//    }
//    else {
//        printf("The strings are not anagrams.\n");
//    }
//
//    return 0;
//}
