int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {

    sort(row1.begin(), row1.end());
    sort(row2.begin(), row2.end());

    int i = 0, j = 0;
    int count = 0;
    int smallestLadoo = 0;

    while (i < m && j < n && count < k) {
        if (row1[i] <= row2[j]) {
            smallestLadoo = row1[i];
            i++;
        } else {
            smallestLadoo = row2[j];
            j++;
        }
        count++;
    }

    while (i < m && count < k) {
        smallestLadoo = row1[i];
        i++;
        count++;
    }

    while (j < n && count < k) {
        smallestLadoo = row2[j];
        j++;
        count++;
    }

    return smallestLadoo;
}
