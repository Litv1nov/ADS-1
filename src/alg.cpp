// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
	int right=size-1, left=0;
	if ((arr[0]> value) || (arr[size-1]<value))	return 0; 
	else {
		while (!(arr[(right+left)/2]==value)) {
			if (arr[(right + left) / 2] > value) {
				right = (right + left) / 2;
			}
			else {
				left = (right + left) / 2;
			}
		}
		left = (right + left) / 2;
		right = left;
		while (arr[left] == value) left--;
		while (arr[right] == value) right++;
		return (right - left-1);
	}
}
