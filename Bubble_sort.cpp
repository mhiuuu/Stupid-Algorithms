/*
Ideas about this algorithm:
- Consider pairs of two consecutive elements in turn. If the following element is smaller than the preceding element, we swap the 2 elements. 
- In other words, the smallest element will be moved to the top.
- Repeat until 2 elements are not satisfied. 

Advantages:
- Simplified code, easy to read and understand.
- Doesn't require more memory.

Disadvantages:
- The complexity is O(N2)
- Not fast enough for large data.
*/
//Code:
for (int i = 0; i < n; i++) {
	for (int j = 0; j < n - 1; j++) {
		if (a[j] > a[j+1]) {
			swap(a[j], a[j+1]);
		}
	}
}
