def bubble_sort(input_list: list[int]):
    """
    input example : [6,4,3,1]
    1. [4,6,3,1]
    2. [4,3,6,1]
    3. [4,3,1,6]
    """

    swap = True
    while swap:
        swap = False

        print(input_list)

        for i in input_list:
            
            if len(input_list) == input_list.index(i) + 1:
                break

            if i > input_list[input_list.index(i) + 1]:

                next_value = input_list[input_list.index(i) + 1]

                ## 다음값에 현재값을 넣어라, 그리고 현재값에 다음 값을 넣어라 (스왑)            
                input_list[input_list.index(i) + 1] = i
                input_list[input_list.index(i)] = next_value
                swap = True

            else:
                pass


if __name__ == "__main__":
    bubble_sort([6,4,3,1,8,9])