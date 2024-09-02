//#include<stdio.h>
//
//void sameNumber(int list1[], int class1, int list2[], int class2) {
//	for (int x = 0; x < class1; x++) {
//		for (int y = 0; y < class2; y++) {
//			if (list1[x] == list2[y]) {
//				printf("%d ,", list1[x]);
//			}
//		}
//	}
//	printf("\b");
//}
//
//void main() {
//	int list1[] = {4,5,2,3,1,6 };
//	int list2[] = {8,7,6,9,4,5 };
//
//	int class1 = sizeof(list1) / sizeof(list1[0]);
//	int class2 = sizeof(list2) / sizeof(list2[0]);
//
//	sameNumber(list1, class1, list2, class2);
//}