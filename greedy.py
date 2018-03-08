# Hard https://www.hackerrank.com/challenges/chief-hopper/problem

def chiefHopper(arr):
    # Complete this function
    arr_set = set(arr)
    arr_set = list(arr_set)
    arr_set.sort()
    min_ = 0
    flag = True
    for i in range(len(arr_set)):
        energy = arr_set[i]
        min_ = arr_set[i]
        for height in arr:
            if height>energy:
                energy-=height-energy
            else: 
                energy+=energy-height
            if energy<0:
                min_ = arr_set[i-1]
                #print(min_)
                break
        if energy >= 0:
            ##print("break")
            break
    while flag:
        flag = True
        energy = min_ - 1
        min_-=1
        for height in arr:
            if height>energy:
                energy-=height-energy
            else: 
                energy+=energy-height
            if energy<0:
                flag = False
                #print(min_)
                break
        
        
    
    return min_ + 1

# Hard https://www.hackerrank.com/challenges/board-cutting/problem

def boardCutting(cost_y, cost_x):
    cost_y.sort(reverse=True)
    cost_x.sort(reverse=True)
    length_ = len(cost_y)+len(cost_x)
    xi,yi = 0,0
    nh, nv = 1,1
    cost = 0
    # n = 0
    # print("re")
    for i in range(0,length_):
        if (yi<len(cost_y) and xi<len(cost_x)) and cost_y[yi]>cost_x[xi]:
            cost+=nv*cost_y[yi]
            yi+=1
            nh+=1
        elif xi<len(cost_x):
            cost+=nh*cost_x[xi]
            xi+=1
            nv+=1
        elif yi<len(cost_y):
            cost+=nv*cost_y[yi]
            yi+=1
            nh+=1
    return cost%(10**9+7)

# Medium https://www.hackerrank.com/challenges/greedy-florist/problem

def getMinimumCost(n, k, c):
    # Complete this function
    c.sort()
    c.reverse()
    if n == k:
        return sum(c)
    person = k
    x = 0
    total = 0
    for i in range(n):
        if person!=0:
            total += (x+1)* c[i]
            person-= 1
        else:
            person = k
            x+=1
            total += (x+1)* c[i]
            person-= 1
            
        
    return total

# Medium https://www.hackerrank.com/challenges/angry-children/problem

def angryChildren(k, arr):
    arr.sort()
    min_ = 1000000001
    for i in range(0,len(arr)-k+1):
        if arr[i+k-1]-arr[i] <= min_:
            min_ = arr[i+k-1]-arr[i]
    return min_

# Easy https://www.hackerrank.com/challenges/marcs-cakewalk/problem

def marcsCakewalk(calorie):
    calorie.sort()
    calorie.reverse()
    miles = 0
    for i,cal in enumerate(calorie):
        miles += cal*(2**i)
    return miles

# Easy https://www.hackerrank.com/challenges/largest-permutation/problem

def largestPermutation(k, arr):
    result_list = []
    length = len(arr)
    index_arr = [0 for _ in range(length+1)]
    for i in range(length):
        index_arr[arr[i]] = i
    i=0
    while k > 0 and i < length:
        index = index_arr[length - i]
        if arr[i] < arr[index]:
            arr[i],arr[index] = arr[index],arr[i]
            index_arr[arr[i]], index_arr[arr[index]] = index_arr[arr[index]], index_arr[arr[i]]
            k-=1
            i+=1
        else:
            i+=1
            
    return arr

# Easy https://www.hackerrank.com/challenges/two-arrays/problem

def twoArrays(k, A, B):
    arr_1 = sorted(A)
    arr_2 = sorted(B,reverse=True)
    for i in range(0,len(arr_1)):
        if arr_1[i]+arr_2[i]>=k:
            continue
        else:
            return "NO"
    return "YES"

