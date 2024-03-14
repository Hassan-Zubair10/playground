import copy

list1 = [1,2,3]
list2 = list1.copy()    # deepcopy

list3 = copy.copy(list1)
list2[1] = -100
list3[1] = -1100


print(f"List 1: {list1}")
print(f"List 2: {list2}")
print(f"List 3: {list3}")

print("======== SHALLOW COPY vs. DEEPCOPY =========")


original_list = [[1, 2, 3], [4, 5, 6]]
print(f"original_list: {original_list}")

shallow_copied_list = copy.copy(original_list)

shallow_copied_list[0][0] = -1

print(f"original_list after shallow copy: {original_list}")

deep_copied_list = copy.deepcopy(original_list)
deep_copied_list[0][0] = -2

print(f"original_list after deepcopy: {original_list}")
print(f"deep_copied_list after shallow copy: {deep_copied_list}")