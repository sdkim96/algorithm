def _return_half_len(full_len: int):

    if full_len == 1:
        return 0
    # 홀수
    if full_len % 2 == 1:
        return full_len // 2 + 1
    # 짝수
    else:
        return full_len // 2


def _divide_half(input_list: list[int]) -> list[list[int]]:

    if len(input_list) == 1:
        return [input_list]

    full_len = len(input_list)
    half_len = _return_half_len(full_len)
    
    front_half = input_list[:half_len]
    back_half = input_list[half_len:]
    new_list = [front_half, back_half]

    return new_list


def divide_step(input_list: list[int]):

    if len(input_list) == 1:
        return [input_list]
    
    divided_list = _divide_half(input_list)
    result = []
    for sublist in divided_list:
        result.extend(divide_step(sublist))

    return result
    
"""
1. 2개의 리스트의 값들을 처음부터 하나씩 비교하여 두 개의 리스트의 값 중에서 더 작은 값을 새로운 리스트(sorted)로 옮긴다.
2. 둘 중에서 하나가 끝날 때까지 이 과정을 되풀이한다.
3. 만약 둘 중에서 하나의 리스트가 먼저 끝나게 되면 나머지 리스트의 값들을 전부 새로운 리스트(sorted)로 복사한다.
4. 새로운 리스트(sorted)를 원래의 리스트(list)로 옮긴다.
https://gmlwjd9405.github.io/2018/05/08/algorithm-merge-sort.html

## 1. 
list1 = [1, 3]
list2 = [2, 4]
일 때

## 2. 
list1 = [1, 3]
list2 = [2, 4]
new_list = [1] -> [1,2] -> [1,2,3] -> [1,2,3,4]

"""
# [[3], [6], [4], [2], [7], [9], [10], [-10], [-99], [3]]
# [[3, 6], [2, 4], [7, 9], [-10, 10], [-99, 3]]

def merge_step(input_divided_list: list[list[int]]):
    
    step = True
    new_list = []
    temp_list = []
    
    while step:
        print(new_list)
        step = False
        
        
        for i in range(2):
            
            temp_list.append(input_divided_list[0])
            input_divided_list.pop(0)

        if len(temp_list) == 2:
            if temp_list[0] > temp_list[1]:
                temp_list[0], temp_list[1] = temp_list[1], temp_list[0]
            new_list.append(temp_list)
            temp_list = []
    
        if len(input_divided_list) != 0:
            step = True

    
    return merge_step(new_list)

if __name__ == '__main__':
    input_list = [3,6,4,2,7,9,10, -10, -99, 18]
    divided_result = divide_step(input_list)

    print(divided_result)
    merge_step(divided_result)
    # merged_result = merge_step(divided_result)
    # merged_result = merge_step(merged_result)