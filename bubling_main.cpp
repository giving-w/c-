#include"bubbling.h"
int main() {
	int arr[10] = { 3,74,36,95,74,24,76,46,74,27 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbling(arr, len);
}