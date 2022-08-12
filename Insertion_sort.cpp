/*
Ideas about this algorithm:
- The main idea of the algorithm is that we will sort each segment consisting of the first 1 element, the first 2 elements, …, the N elements.

Advantages:
- If the list is mostly sorted, Insertion Sort will run very fast.

Disadvantages:
- The complexity is O(N2)
- Not fast enough for large data.
*/
//Code:
for (int i = 1; i < n; i++) {
	// Find the right position for i
	int j = i;
	while (j > 0 && data[i] < data[j-1]) {
    --j;
	// Move i to the right position
	  int tmp = data[i];
	  for (int k = i; k > j; k--) {
		data[k] = data[k-1];
	  data[j] = tmp;
    }
  }
}
