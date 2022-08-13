/*
Ideas about this algorithm:
- It works recursively
- Divide the data into 2 parts and sort each part
- Then we merge 2 parts together. How to do this ... follow this:
  + Create a new array A to hold the sorted elements.
  + Compares the first 2 elements of the 2 parts. 
  + The smaller element we put in A and remove from the corresponding part.
  + Continue like this until we put all the elements in the array A.
  
Advantages:
- Run fast, complexity 
- O(N∗logN)
- Stable

Disadvantages:
- More memory is required to store the array A
*/
//Code: 
// The intermediate array A 
int a[MAXN];

// Sort the elements with index from left to right of array data
void mergeSort(int data[MAXN], int left, int right) {
	if (data.length == 1) {
		// If the array data just has 1 element, we don't need to sort it
		return ;
	}
	int mid = (left + right) / 2;
	// Sort 2 sections
	mergeSort(data, left, mid);
	mergeSort(data, mid+1, right);

	// Mix 2 sorted section
	int i = left, j = mid + 1; // The element under consideration of each half
	int cur = 0; // Index on array a

	while (i <= mid || j <= right) { // chừng nào còn 1 phần chưa hết phần tử.
		if (i > mid) {
			// There are no elements left to the left
			a[cur++] = data[j++];
		} else if (j > right) {
			// There are no elements left to the right
			a[cur++] = data[i++];
		} else if (data[i] < data[j]) {
			// The elements to the left is smaller
			a[cur++] = data[i++];
		} else {
			a[cur++] = data[j++];
		}
	}

	// Copy the array A to the array data
	for (int i = 0; i < cur; i++) {
		data[left + i] = a[i];
  }
}
