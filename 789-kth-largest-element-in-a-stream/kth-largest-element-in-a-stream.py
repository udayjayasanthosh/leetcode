class KthLargest:

    def __init__(self, k: int, nums: List[int]):
        self.a=nums
        self.b=(-1)*k

    def add(self, val: int) -> int:
        self.a.append(val)
        self.a.sort()
        return self.a[self.b]
        


# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)