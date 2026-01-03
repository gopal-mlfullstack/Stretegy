## Python Basics
# 1. Variables and Data Types
# Concept: Variables store data, and python has several built-in data types.

# Variables - containers for storing data


# name = "Gopal"  # String
# age = 19  # Integer

height = 5.6  # Float
is_student = True  # Boolean
nothing = None  # None type

# In python We can ressign different types, cause Dynamic typing
x = 7
print(x)
x = "Hello, My name is Gopal Mahato\nI am writing basic python programs in my fedora 43 workstation!"
print(x)


# Strings
# Concept: Sequences of characters for text manipulation.

# String creation
greeting = "Hello, World!"
multiline = """This is a
multiline string
If you don't know my name\nMy name is Gopal Mahato!
"""

print(greeting)
print(multiline)

## String Operations
name = "python"
print(name.upper())  # PYTHON
print(name.capitalize())  # Python
print(name.replace("py", "code").capitalize())  # Codethon


## String indexing and slicing
text = "Programming"
print(text[0])  # P (first character)
print(text[-1])  # g (last character)
print(text[:4])  # Prog (slice)
print(text[::2])  # Pormig (every second char)


## String formatting
age = 19
name = "Gopal"

# Method 1: f-string (modern method)
print(f"Hello, Everyone.......\nMy name is {name} and I am {age} years old!")

# Method 2: format()
print("My name is {} and I am {}".format(name, age))

# Method 3: % operator (old one)
print("My name is %s and I'm %d" % (name, age))

# String methods

sentence = "   hello world   "
print(sentence.strip())  # In strings stript() fucntion removes whitespace
print(sentence.split())  # splits every sub-string into a list
print("-".join(["a", "b", "c"]))  # Join list into string


"""
3. Lists
Concept: Ordered, mutable collections that can hold mixed data types.
"""
# Creating lists
fruits = ["apple", "banana", "cherry"]
mixed = [1, "hello", 3.14, True]
empty = []

print(fruits, mixed)
print(empty)

# Accessing elements
print("First element of the list: ", fruits[0])  # returns apple (first element)
print("Last element: ", fruits[-1])  # returns the last element

# Modifying lists
fruits[1] = "blueberry"  # change element
fruits.append("mango")  # add to end
fruits.insert(0, "apricot")  # Insert at position
fruits.extend(
    ["fig", "grape"]
)  # In list using extend function we can add multiple elements

# Removing elements
fruits.remove("apple")  # remove by value
popped = fruits.pop()  # remove and return the last element
print(popped, " is removed!")
print(fruits[0], " Delection Completed!")
del fruits[0]  # Delete by index

# print("All items cleared!")
# fruits.clear()  # remove all items
print("Final version: ", fruits)

## List operations
numbers = [1, 2, 3, 4, 5, 6, 7, 2, 99]
print(len(numbers))  # Returns total numbers of elements
print(sorted(numbers))  # returns sorted copy
numbers.sort()
print("In-place sorted form: ", numbers)
numbers.reverse()
print("In-place reverse form: ", numbers)

print(f"{numbers[0]} appears {numbers.count(1)} times!")
print(numbers.index(4))  # Find the index

# List slicing
nums = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
print(nums[2:5])  # [2, 3, 4]
print(nums[:5])  # first five [0, 1, 2, 3, 4]
print(nums[5:])  # from index five to end
print(nums[::2])  # like string every 2nd element

# List comprehension (elegent way to create lists)
squares, evens = [x**2 for x in range(10)], [x for x in range(20) if x % 2 == 0]
print(squares, evens)
