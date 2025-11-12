N, K = input().split()
N = int(N)
K = int(K)

List=[]

A = 2
while(1):
    if A > N:
        break
    List.append(A)
    A += 1

A = 2
B = 1
count = 0
while(1):
    pop_target = A * B
    if pop_target in List:
        List.remove(pop_target)
        B += 1
        count += 1
    else:
        if pop_target > List[len(List) - 1]:
            A += 1
            B = 1
        else:
            B += 1
    if count == K:
        pop_target = A * (B - 1)
        break
    elif A > N:
        break
   
print(pop_target)