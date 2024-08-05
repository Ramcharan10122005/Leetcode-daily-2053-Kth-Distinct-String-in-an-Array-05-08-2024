char* kthDistinct(char** arr, int arrSize, int k) {
    int* counts = (int*)malloc(arrSize * sizeof(int));
    for (int i = 0; i < arrSize; i++) {
        counts[i] = 0;
    }
    for (int i = 0; i < arrSize; i++) {
        for (int j = 0; j < arrSize; j++) {
            if (i != j && strcmp(arr[i], arr[j]) == 0) {
                counts[i]++;
            }
        }
    }
    for (int i = 0; i < arrSize; i++) {
        if (counts[i] == 0) { 
            k--;
        }
        if (k == 0) {
            return arr[i];
        }
    }

    return ""; 
}
