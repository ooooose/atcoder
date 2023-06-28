"""
ABC304
A-First Player: 結果AC
"""
N = int(input())
person_list = []
age_list=[]
for i in range(N):
    person, age = list(input().split(' '))
    person_list.append(person)
    age_list.append(int(age))
first_index = age_list.index(min(age_list))
new_persons = person_list[first_index:]
new_persons += person_list[:first_index]
for p in new_persons:
    print(p)