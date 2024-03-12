def divide(x, y):
    try:
        print(f"Dividing [{x}] by [{y}]")
        result = x / y
    except ZeroDivisionError:
        print("Cannot divide by zero!")
    else:
        print("Division successful!")
        print(f"Result: {result}")
    finally:
        print("Executing finally block regardless of exception.")

# Test the function
divide(10, 2)
divide(10, 0)
