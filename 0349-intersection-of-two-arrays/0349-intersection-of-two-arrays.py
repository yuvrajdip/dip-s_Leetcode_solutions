class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        st1 = set(nums1)
        st2 = set(nums2)

        result = st1.intersection(st2)

        result = list(result)

        return result