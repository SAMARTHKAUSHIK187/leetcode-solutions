class Solution:
    def minFlips(self, s: str) -> int:
        zeroes = s.count('0')
        ones = s.count('1')

        to_reduce = min(zeroes, ones-1)
        
        if s[0] == '1' and s[-1] == '1' and zeroes == len(s) - 2:
            return 0
        elif s[0] == '1' and s[-1] == '1' and zeroes > 0:
            return min(ones - 2, zeroes)
        else:
            return max(0, to_reduce)