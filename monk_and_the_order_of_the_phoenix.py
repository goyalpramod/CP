'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here
def binarySearch(arr,key):
    si = 0
    li = len(arr) - 1
    while si<li:
        mid = (li + si)//2
        if key>= arr[mid]:
            si = mid+1
        else:
            li = mid
    return si


n = int(input())
rows = []

for i in range(n):
    arr = list(map(int , input().split()))
    arr.pop(0)
    rows.append(arr)

q = int(input())
first_min = []
first_min.append(rows[0][0])

for i in range(1,len(rows[0])):
    first_min.append(min(first_min[-1],rows[0][i]))

while(q>0):
    v = list(map(int, input().split()))

    if(v[0] == 0):
        rows[v[1]-1].pop()
        if v[1] == 1:
            first_min.pop()

    elif(v[0] == 1):
        rows[v[1]-1].append(v[2])
        if v[1] == 1:
            first_min.append(min(first_min[-1],v[2]))

    else:
        chk = 0
        key = first_min[-1]
        if rows[0] == []:
            print("NO")
            continue
        else:
            for i in range(1,len(rows)):
                if rows[i] == [] or key > rows[i][-1]:
                    chk = 1
                    break
                else:
                    key = rows[i][binarySearch(rows[i],key)]
            if chk == 0:
                print("YES")
            else:
                print("NO")

    q-=1

# use of binary search