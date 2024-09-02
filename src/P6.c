//#include <stdio.h>
//
//#define MAX_CHAR 256  
//
//void occurrence(char str[]) {
//    int count[MAX_CHAR] = { 0 };  
//    int max = 0;  
//    char result; 
//   
//    for (int i = 0; str[i] != '\0'; i++) {
//        char current = str[i];
//        if ((current >= 'a' && current <= 'z') || (current >= 'A' && current <= 'Z') || (current >= '0' && current <= '9')) {
//            count[(int)current]++;
//        }
//    }
//
//    for (int i = 0; i < MAX_CHAR; i++) {
//        if (count[i] > max) {
//            max = count[i];
//            result = (char)i;
//        }
//    }
//
//    printf("Character: '%c', Occurrence: %d\n", result, max);
//}
//
//int main() {
//    char str[] = "Hello, world!";
//    occurrence(str);
//
//    return 0;
//}
