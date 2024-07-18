class Solution
{
public:
    void mergearray(vector<int> &nums, int s, int mid, int e)
    {
        int l1 = mid - s + 1, l2 = e - mid;
        int arr1[l1], arr2[l2];
        int i = 0, j = 0, k = s;
        while (k <= e)
        {
            if (k <= mid)
            {
                arr1[i++] = nums[k++];
            }
            else
            {
                arr2[j++] = nums[k++];
            }
        }
        i = 0, j = 0, k = s;
        while (i < l1 && j < l2)
        {
            if (arr1[i] > arr2[j])
            {
                nums[k++] = arr2[j++];
            }
            else
            {
                nums[k++] = arr1[i++];
            }
        }
        while (i < l1)
        {
            nums[k++] = arr1[i++];
        }
        while (j < l2)
        {
            nums[k++] = arr2[j++];
        }
    }

    int countpairs(vector<int> &nums, int s, int mid, int e)
    {
        int i = s, j = mid + 1, cnt = 0;
        while (i <= mid && j <= e)
        {
            if ((long long)nums[i] > (long long)2 * nums[j])
            {
                cnt += (mid - i + 1);
                j++;
            }
            else
            {
                i++;
            }
        }
        return cnt;
    }

    int split(vector<int> &nums, int s, int e)
    {
        int cnt = 0;
        if (s >= e)
            return cnt;
        int mid = s + (e - s) / 2;
        cnt += split(nums, s, mid);
        cnt += split(nums, mid + 1, e);
        cnt += countpairs(nums, s, mid, e);
        mergearray(nums, s, mid, e);
        return cnt;
    }
    int reversePairs(vector<int> &nums)
    {
        return split(nums, 0, nums.size() - 1);
    }
};