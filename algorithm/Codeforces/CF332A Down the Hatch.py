n = int(raw_input())
s = raw_input()
l = len(s)
i = n
ans = 0
while i < l:
    if s[i - 3] == s[i - 2] == s[i - 1]:
        ans += 1
    i += n
print ans
