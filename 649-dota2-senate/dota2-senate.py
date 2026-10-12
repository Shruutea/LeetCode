class Solution:
    def predictPartyVictory(self, senate: str) -> str:
        senate = list(senate)
        D_q, R_q = deque(), deque()

        for i,c in enumerate(senate):
            if c == 'R':
                R_q.append(i)
            else:
                D_q.append(i)

        while R_q and D_q:
            r_turn = R_q.popleft()
            d_turn = D_q.popleft()

            if(r_turn<d_turn):
                R_q.append(r_turn+len(senate))
            else:
                D_q.append(d_turn+len(senate))

        return "Radiant" if R_q else "Dire"