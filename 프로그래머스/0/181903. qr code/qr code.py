def solution(q, r, code):
    answer = []
    
    i = 0
    for num in code:
        if i % q == r:
            answer.append(num)
        i += 1
    return ''.join(answer) 