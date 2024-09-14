# 패스	테이블	최솟값
# 0	[9,1,6,8,4,3,2,0]	0
# 1	[0,1,6,8,4,3,2,9]	1
# 2	[0,1,6,8,4,3,2,9]	2
# 3	[0,1,2,8,4,3,6,9]	3
# 4	[0,1,2,3,4,8,6,9]	4
# 5	[0,1,2,3,4,8,6,9]	6
# 6	[0,1,2,3,4,6,8,9]	8


def selection_sort(input_list: list[int]):
    """
    1. 주어진 리스트에서 최소값을 찾는다
    2. 그 값을 맨 앞 값과 교체한다.
    3. 맨 앞 값 (정렬된) 값을 제외하고 나머지를 같은 방법으로 교체한다.
    """


    for i in range(len(input_list)):
        print(input_list)

        # 1. 최소값 찾기
        min_value = min(input_list[i:])

        index_of_min_value = input_list.index(min_value)
        index_of_first_value = i
        first_value = input_list[i]
        
        # 2. 그 값을 맨 앞값과 교체
        input_list[index_of_first_value] = min_value
        input_list[index_of_min_value] = first_value






if __name__ == "__main__":
    selection_sort([9,1,6,8,23,5,0])
