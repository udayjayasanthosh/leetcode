class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i=0
        j=0
        a=[]
        while i<m and  j<n:
            if nums1[i]<nums2[j]:
                a.append(nums1[i])
                i+=1
            elif nums2[j]<=nums1[i]:
                a.append(nums2[j])
                j+=1
        while j<n:
            a.append(nums2[j])
            j+=1
        while i<m:
            a.append(nums1[i])
            i+=1
        for i in range(len(a)):
            nums1[i]=a[i]

        