import sys

# 테스트케이스의 개수를 입력 받습니다.
num = int(sys.stdin.readline())

# 각 테스트케이스를 처리합니다.
for _ in range(num):
    # 두 정수 A와 B를 입력 받습니다.
    A, B = map(int, sys.stdin.readline().split())
    
    # A와 B의 합을 출력합니다.
    print(A + B)
