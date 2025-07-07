
def insertion_sort(A: list, size: int):
    """
    inputs:
        A: list = it is an array of numbers to be sorted 
    """
    # [7, 3, 5, 6, 1, 0, 2]
    for i in range(1, size):
        key = A[i]
        j = i - 1
        while j >= 0 and A[j] > key:
            A[j+1] = A[j]
            j = j - 1
        A[j + 1] = key


def main():
    unsorted_array = [7, 3, 5, 6, 1, 0, 2]
    size = len(unsorted_array)
    insertion_sort(unsorted_array, size)
    return unsorted_array



if __name__ == "__main__":
    print(main())