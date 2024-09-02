//#include<stdio.h>
//
//void findDifferent(int list1[],int class1 ,int list2[], int class2) {
//	int different[100], i = 0;
//
//	for (int x = 0; x < class1; x++) {
//		int found = 0;
//		for (int y = 0; y < class2; y++) {
//			if (list1[x] == list2[y]) {
//				found = 1;
//				break;
//			}
//		}
//		if (!found) {
//			different[i++] = list1[x];
//		}
//	}
//
//	for (int x = 0; x < class2; x++) {
//		int found = 0;
//		for (int y = 0; y < class1; y++) {
//			if (list2[x] == list1[y]) {
//				found = 1;
//			}
//		}
//		if (!found) {
//			different[i++] = list2[x];
//		}
//	}
//
//	for (int x = 0; x < i - 1; x++) {
//		for (int y = 0; y < i - x - 1; y++) {
//			if (different[y] > different[y + 1]) {
//				int temp = different[y];
//				different[y] = different[y + 1];
//				different[y + 1] = temp;
//			}
//		}
//	}
//
//	printf("All different numbers in a single list: ");
//	for (int x = 0; x < i; x++) {
//		printf("%d ", different[x]);
//	}
//	printf("\n");
//}
//
//void main() {
//	int list1[] = { 4,5,2,3,1,6 };
//	int list2[] = {8,7,6,9,4,5 };
//
//	int class1 = sizeof(list1) / sizeof(list1[0]);
//	int class2 = sizeof(list2) / sizeof(list2[0]);
//
//	findDifferent(list1, class1, list2, class2);
//
//}