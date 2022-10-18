def balance_check(string):
    stack = []
    for i in string:
        if i in ['{', '(', '[']:
            stack.append(i)
        else:
            if len(stack) == 0:
                return False
            else:
                if i == '}' and stack[-1] == '{':
                    stack.pop()
                elif i == ')' and stack[-1] == '(':
                    stack.pop()
                elif i == ']' and stack[-1] == '[':
                    stack.pop()
                else:
                    return False
    if len(stack) == 0:
        return True
    else:
        return False

S=[]
while True:
    string = input().strip()
    S.append(string)
    if (string==""):
        break

for i in range(0, len(S)-1):
    if balance_check(S[i]):
        print("true")
    else:
        print("flase")

