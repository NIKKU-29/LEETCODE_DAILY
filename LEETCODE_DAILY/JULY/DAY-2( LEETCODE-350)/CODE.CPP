//THIS IS THE CODE USING SORTING

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    
        sort(begin(nums1), end(nums1));
        sort(begin(nums2), end(nums2));
        int n1 = nums1.size(), n2 = nums2.size();
        int i = 0, j = 0;
        vector<int> ans;

        while (i < n1 && j < n2) {
            if (nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }
        return ans;
    }
};

//THIS IS THE CODE USING HASHMAP.

class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> map = new HashMap<>();
        List<Integer> result = new ArrayList<>();

        // Count the occurrences of each element in nums1
        for (int num : nums1) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        // Find intersections with nums2
        for (int num : nums2) {
            if (map.containsKey(num) && map.get(num) > 0) {
                result.add(num);
                map.put(num, map.get(num) - 1);
            }
        }

        // Convert the result list to an array
        int[] intersectArray = new int[result.size()];
        for (int i = 0; i < result.size(); i++) {
            intersectArray[i] = result.get(i);
        }

        return intersectArray;
    }
}
