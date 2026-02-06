from expense import expense,invalidexpenseerror

def main(): 
    try:
        e1 = expense("coffe",299,"Food")
        e2 = expense("Internet Bill", 700, "Utilities")

        print(e1)
        print(e2)

    except invalidexpenseerror as e:
        print("error", e)


if __name__ == "__main__":
    main()