
def check_lists(list1, list2): #define the lists


    list1_sorted = sorted(list1) #sort list1
    list2_sorted = sorted(list2) #sort list2


    if list1_sorted == list2_sorted: #check if the sorted lists equal each others
        return True
    else:
        return False


list1 = list(input("enter a list")) #enter the lists as integer
list2 = list(input("enter another list"))

if check_lists(list1, list2): #print the answer depending on if the lists equal each other 
    print("The lists are equal= True")
else:
    print("The lists are equal= False")

