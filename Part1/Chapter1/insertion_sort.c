void swap(int* a, int* b) {
    int* c = a;
    a = b;
    b = c;
}

void insertion_sort(int s[], int n) {
    int i, j;

    for (i = 1 ; i < n; ++i) {
        j = i;
        while ((j > 0) && (s[j] < s[j-1])) {
            swap(&s[j], &s[j-1]);
            j = j-1;
        }
    }
}