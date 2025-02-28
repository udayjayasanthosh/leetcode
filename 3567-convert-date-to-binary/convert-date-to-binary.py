class Solution:
    def convertDateToBinary(self, date: str) -> str:
        a=date.split("-")
        year=bin(int(a[0]))
        month=bin(int(a[1]))
        day=bin(int(a[2]))
        return year[2:]+'-'+month[2:]+'-'+day[2:]

        