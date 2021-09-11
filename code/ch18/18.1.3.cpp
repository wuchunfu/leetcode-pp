#查找最后一个小于等于 x 的元素
int bs(vector<int>& nums, int x) {
    int l = 0, h = nums.size() - 1;
    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (l == h || l + 1 == h) {
            break;
        } else if (nums[mid] <= x) {
            l = mid;
        } else {
            h = mid - 1;
        }
    }
    if (nums[h] <= x) {
        return nums[h];
    } else {
        return nums[l];
    }
}