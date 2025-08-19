int lengthOfLongestSubstring(char* s) {
    int x[95];
    for (int i = 0; i < 95; i++) {
        x[i] = -1;
    }
    int l = 0, max = 0;
    int len = strlen(s);

    for (int r = 0; r < len; r++) {
        int idx = (int)s[r] - 32;
        if (x[idx] != -1) {
            l = (x[idx] + 1 > l) ? x[idx] + 1 : l;
        }
        x[idx] = r;
        int length = r - l + 1;
        if (length > max) max = length;
    }

    return max;
}
