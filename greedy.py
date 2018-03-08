# Hard https://www.hackerrank.com/challenges/chief-hopper/problem

def chiefHopper(arr):
    # Complete this function
    arr_set = set(arr)
    arr_set = list(arr_set)
    arr_set.sort(reverse=True)
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
                print(min_)
                break
        if energy < 0:
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
