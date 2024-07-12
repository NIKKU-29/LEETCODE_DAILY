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