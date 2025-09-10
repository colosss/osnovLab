import random

n=0
A=[]
otr=0
count=0
def function():
    global n, count, A, otr
    rand_count=0
    for i in range(0, n):
        rand_count=random.randint(-((n//2)-1), n//2)
        A+=[rand_count]
        if rand_count<0:
            otr+=rand_count
            count+=1
def main():
    global n, count, A, count
    print("Введите колличество символов массива А\n")
    n=int(input())
    function()
    print(A)
    print(f"Сумма отрицательных элементов массива равна: {otr}\n")
    print(f"Колличество отлицательных элементов равно: {count}\n")
if __name__ == "__main__":
    main()