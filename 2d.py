from typing import List, Sequence, Dict
import statistics
import time


def tictoc(func):
    def wrapper(*args,**kwargs):
        t1 = time.time()
        func(*args,**kwargs)
        t2 = time.time()-t1
        print(f"took {t2} seconds")
    return wrapper
@tictoc
def compute_stats(nums: Sequence[float]) -> Dict[str, float]:
    """
    Return basic statistics for nums: count, mean, median, stdev (population).

    >>> compute_stats([1,2,3,4])
    {'count': 4, 'mean': 2.5, 'median': 2.5, 'stdev': 1.118033988749895}
    >>> compute_stats([])
    {'count': 0, 'mean': 0.0, 'median': 0.0, 'stdev': 0.0}
    """
    lst = list(nums)
    if not lst:
        return {"count": 0, "mean": 0.0, "median": 0.0, "stdev": 0.0}
    return {
        "count": len(lst),
        "mean": statistics.mean(lst),
        "median": statistics.median(lst),
        "stdev": statistics.pstdev(lst),
    }

@tictoc
def rotate_matrix_90(matrix: Sequence[Sequence[int]]) -> List[List[int]]:
    """
    Rotate a rectangular matrix 90 degrees clockwise.

    >>> rotate_matrix_90([[1,2,3],[4,5,6]])
    [[4, 1], [5, 2], [6, 3]]
    >>> rotate_matrix_90([[1]])
    [[1]]
    """
    if not matrix:
        return []
    return [[row[i] for row in reversed(matrix)] for i in range(len(matrix[0]))]


if __name__ == "__main__":
    # small demo / smoke tests
    
    compute_stats([1, 2, 3, 4, 5])
    rotate_matrix_90([[1, 2, 3], [4, 5, 6]])
