def divide(x, y):
    try:
        print(f"Dividing [{x}] by [{y}]")
        result = x / y
        a = 10
    except ZeroDivisionError:
        print("Cannot divide by zero!")
        b = 20
        #print(f"a = {a}")
    else:
        print("Division successful!")
        print(f"Result: {result}")
        print(f"a = {a}")
        #print(f"b = {b}")
    finally:
        print("Executing finally block regardless of exception.")
        #print(f"a = {a}")
        #print(f"b = {b}")

# Test the function
divide(10, 2)
print ("----------")
divide(10, 0)
