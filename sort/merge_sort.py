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
    
## 
def merge_step(input_divided_list: list[list[int]]):
    pass


if __name__ == '__main__':
    input_list = [3,6,4,2,7,9,10, -10, -99, 3]
    divided_result = divide_step(input_list)
    print(divided_result)