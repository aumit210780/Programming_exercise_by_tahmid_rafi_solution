s = str(input())
n = int(input())
f = ""
for i in range(0, len(s)):
    if ord(s[i]) in range(65, 91):
        f+= (chr(((ord(s[i])-64)%26)+(64+n)))
    elif ord(s[i]) in range(97, 123):
        f+= (chr(((ord(s[i]) - 96) % 26) + (96+n)))
    else:
        f+=s[i]


print(f)