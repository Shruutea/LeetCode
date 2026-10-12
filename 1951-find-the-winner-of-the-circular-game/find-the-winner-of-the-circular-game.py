class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        D = deque()

        for i in range(1,n+1):
            D.append(i)

        while(len(D)>1):
            for i in range(k-1):
                num = D.popleft()
                D.append(num)
            D.popleft()

        return D[0]
